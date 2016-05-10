%code requires
{
#include "../ast/ast.h"
}

%{
#include <stdio.h>

// Analisador léxico que será chamado pelo Parser.
int yylex();

// Contagem e saída de erros.
void yyerror(const char *);
 
%}

%union {
    //bool    bool_value;
    //int     int_value;
    //long    long_value;
    //float   float_value;
    //double  double_value;
    //char *  str_value;
    //char *  identifier;
    char *  lexeme;
    
    ExpressionNode *expression;
    StatementNode *statement;
}


%token	<lexeme> IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL
%token   FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%type <lexeme> unary_operator assignment_operator
%type <expression> primary_expression constant enumeration_constant string
%type <expression> postfix_expression unary_expression cast_expression
%type <expression> multiplicative_expression additive_expression shift_expression
%type <expression> relational_expression equality_expression and_expression
%type <expression> exclusive_or_expression inclusive_or_expression
%type <expression> logical_and_expression logical_or_expression
%type <expression> conditional_expression assignment_expression expression
%type <expression> argument_expression_list
%type <expression> constant_expression
%type <expression> generic_selection
%type <expression> expression_statement

%type <statement> statement
%type <statement> jump_statement selection_statement iteration_statement

%start translation_unit
%%

primary_expression
	: IDENTIFIER {
	   IdentifierNode *idNode = new IdentifierNode($1);
	   $$ = idNode;
}	| constant { $$ = $1; }
	| string { $$ = $1; }
	| '(' expression ')' { $$ = $2; }
	| generic_selection { $$ = $1; }
	;

constant
	: I_CONSTANT {		/* includes character_constant */
	   IntegerLiteralNode *intLiteral = new IntegerLiteralNode($1);
	   $$ = intLiteral;
}	| F_CONSTANT {
      FloatLiteralNode *floatLiteral = new FloatLiteralNode($1);
	   $$ = floatLiteral;
}	| ENUMERATION_CONSTANT {	/* after it has been defined as such */
	   $$ = NULL;
}	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER {
	   $$ = NULL;
}	;

string
	: STRING_LITERAL {
	   StringLiteralNode *stringLiteral = new StringLiteralNode($1);
	   $$ = stringLiteral;
}	| FUNC_NAME {
      StringLiteralNode *stringLiteral = new StringLiteralNode("__func__");
	   $$ = stringLiteral;
}	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')' { $$ = NULL; }
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association
	;

generic_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	;

postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression '[' expression ']' {
	   ArrayReferenceNode *node = new ArrayReferenceNode($1, $3);
	   $$ = node;
}	| postfix_expression '(' ')' {
   	FunctionCallNode *node = new FunctionCallNode($1, NULL);
   	$$ = node;
}	| postfix_expression '(' argument_expression_list ')' {
   	FunctionCallNode *node = new FunctionCallNode($1, (ArgumentListNode*)$3);
   	$$ = node;
}	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode($1, "++");
   	$$ = node;
}	| postfix_expression DEC_OP {
   	PostUnaryExpressionNode *node = new PostUnaryExpressionNode($1, "--");
   	$$ = node;
}	| '(' type_name ')' '{' initializer_list '}'  { $$ = NULL; }
	| '(' type_name ')' '{' initializer_list ',' '}'  { $$ = NULL; }
	;

argument_expression_list
	: assignment_expression  {
   	ArgumentListNode *node = new ArgumentListNode($1, NULL);
   	$$ = node;
}	| argument_expression_list ',' assignment_expression {
      //TODO solve list inversion
   	ArgumentListNode *node = new ArgumentListNode($3, (ArgumentListNode*)$1); 
   	$$ = node;
}	;

unary_expression
	: postfix_expression { $$ = $1; }
	| INC_OP unary_expression {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("++", $2);
   	$$ = node;
}	| DEC_OP unary_expression {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode("--", $2);
   	$$ = node;
}	| unary_operator cast_expression {
   	PreUnaryExpressionNode *node = new PreUnaryExpressionNode($1, $2);
   	$$ = node;
}	| SIZEOF unary_expression  { $$ = NULL; }
	| SIZEOF '(' type_name ')'  { $$ = NULL; }
	| ALIGNOF '(' type_name ')'  { $$ = NULL; }
	;

unary_operator
	: '&' { $$ = (char*)"&"; }
	| '*' { $$ = (char*)"*"; }
	| '+' { $$ = (char*)"+"; }
	| '-' { $$ = (char*)"-"; }
	| '~' { $$ = (char*)"~"; }
	| '!' { $$ = (char*)"!"; }
	;

cast_expression
	: unary_expression { $$ = $1; }
	| '(' type_name ')' cast_expression {
   	CastNode *node = new CastNode("type",$4);
   	$$ = node;
}	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"*",$3);
   	$$ = node;
}	| multiplicative_expression '/' cast_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"/",$3);
   	$$ = node;
}	| multiplicative_expression '%' cast_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"%",$3);
   	$$ = node;
}	;

additive_expression
	: multiplicative_expression { $$ = $1; }
	| additive_expression '+' multiplicative_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"+",$3);
   	$$ = node;
}	| additive_expression '-' multiplicative_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"-",$3);
   	$$ = node;
}	;

shift_expression
	: additive_expression { $$ = $1; }
	| shift_expression LEFT_OP additive_expression  {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"<<",$3);
   	$$ = node;
}	| shift_expression RIGHT_OP additive_expression  {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,">>",$3);
   	$$ = node;
}	;

relational_expression
	: shift_expression { $$ = $1; }
	| relational_expression '<' shift_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"<",$3);
   	$$ = node;
}	| relational_expression '>' shift_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,">",$3);
   	$$ = node;
}	| relational_expression LE_OP shift_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"<=",$3);
   	$$ = node;
}	| relational_expression GE_OP shift_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,">=",$3);
   	$$ = node;
}	;

equality_expression
	: relational_expression { $$ = $1; }
	| equality_expression EQ_OP relational_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"==",$3);
   	$$ = node;
}	| equality_expression NE_OP relational_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"!=",$3);
   	$$ = node;
}	;

and_expression
	: equality_expression { $$ = $1; }
	| and_expression '&' equality_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"&",$3);
   	$$ = node;
}	;

exclusive_or_expression
	: and_expression { $$ = $1; }
	| exclusive_or_expression '^' and_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"^",$3);
   	$$ = node;
}	;

inclusive_or_expression
	: exclusive_or_expression { $$ = $1; }
	| inclusive_or_expression '|' exclusive_or_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"|",$3);
   	$$ = node;
}	;

logical_and_expression
	: inclusive_or_expression { $$ = $1; }
	| logical_and_expression AND_OP inclusive_or_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"&&",$3);
   	$$ = node;
}	;

logical_or_expression
	: logical_and_expression { $$ = $1; }
	| logical_or_expression OR_OP logical_and_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,"||",$3);
   	$$ = node;
}	;

conditional_expression
	: logical_or_expression { $$ = $1; }
	| logical_or_expression '?' expression ':' conditional_expression {
   	ConditionalExpressionNode *node = new ConditionalExpressionNode($1,$3,$5);
   	$$ = node;
}	;

assignment_expression
	: conditional_expression { $$ = $1; }
	| unary_expression assignment_operator assignment_expression {
   	BinaryExpressionNode *node = new BinaryExpressionNode($1,$2,$3);
   	$$ = node;
}	;

assignment_operator
	: '=' { $$ = (char*)"="; }
	| MUL_ASSIGN { $$ = (char*)"*="; }
	| DIV_ASSIGN { $$ = (char*)"/="; }
	| MOD_ASSIGN { $$ = (char*)"%="; }
	| ADD_ASSIGN { $$ = (char*)"+="; }
	| SUB_ASSIGN { $$ = (char*)"-="; }
	| LEFT_ASSIGN { $$ = (char*)"<<="; }
	| RIGHT_ASSIGN { $$ = (char*)">>="; }
	| AND_ASSIGN { $$ = (char*)"&="; }
	| XOR_ASSIGN { $$ = (char*)"^="; }
	| OR_ASSIGN { $$ = (char*)"|="; }
	;

expression
	: assignment_expression {
   	ExpressionListNode *node = new ExpressionListNode($1, NULL);
   	$$ = node;
}	| expression ',' assignment_expression {
      //TODO solve list inversion
   	ExpressionListNode *node = new ExpressionListNode($3, (ExpressionListNode*)$1); 
   	$$ = node;
}	;

constant_expression
	: conditional_expression { $$ = $1; }	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	| static_assert_declaration
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator '=' initializer
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| BOOL
	| COMPLEX
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS
	| parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{'  block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';' { $$ = NULL; }
	| expression ';' { $$ = $1; }
	;

selection_statement
	: IF '(' expression ')' statement ELSE statement {
      IfNode *node = new IfNode($3, $5, $7);
      $$ = node;
}	| IF '(' expression ')' statement {
      IfNode *node = new IfNode($3, $5, new SkipNode());
      $$ = node;
}	| SWITCH '(' expression ')' statement {
      SwitchNode *node = new SwitchNode($3, $5);
      $$ = node;
}	;

iteration_statement
	: WHILE '(' expression ')' statement {
      WhileNode *node = new WhileNode($3, $5);
      $$ = node;
}	| DO statement WHILE '(' expression ')' ';' {
      DoWhileNode *node = new DoWhileNode($2, $5);
      $$ = node;
}	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement {
      //ForNode *node = new ForNode($3, $4, $5, $7);
}	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';' {
      GotoNode *node = new GotoNode($2);
      $$ = node;
}	| CONTINUE ';' {
      ContinueNode *node = new ContinueNode();
      $$ = node;
}	| BREAK ';' {
      BreakNode *node = new BreakNode();
      $$ = node;
}	| RETURN ';' {
      ReturnNode *node = new ReturnNode(NULL);
      $$ = node;
}	| RETURN expression ';' {
      ReturnNode *node = new ReturnNode($2);
      $$ = node;
}	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

%%
#include <stdio.h>

#include <string>
using std::string;

extern char yytext[];
extern int yylineno;
extern int column;
extern string line;
extern char * curfilename;

void yyerror(const char *s)
{
	//fflush(stdout);
	//fprintf(stderr, "*** %s\n", s);
	fflush(stdout);
	printf("%s:%d:%d\n",curfilename,yylineno,column);
	printf("%s\n",line.c_str());
	printf("%*s\n%*s\n", column, "^", column, s);
	
}
