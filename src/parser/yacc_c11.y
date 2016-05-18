%code requires
{
#include "../ast/ast.h"
}

%{
#include <stdio.h>
#include <string.h>

#include "../ast/ast.h"
#include "../symtab/symbol_table.h"

// Analisador léxico que será chamado pelo Parser.
int yylex();

// Contagem e saída de erros.
void yyerror(const char *);
 
extern SymbolTable symbolTable;
Node *astRoot = NULL;
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

    TypeNode *type;
    ExpressionNode *expression;
    StatementNode *statement;
    DeclarationNode *declaration;
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

%type <lexeme> unary_operator assignment_operator struct_or_union

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

%type <statement> statement compound_statement
                  jump_statement selection_statement iteration_statement
                  block_item_list block_item expression_statement
                  labeled_statement

%type <declaration> declaration init_declarator_list init_declarator declarator
                    direct_declarator pointer
                    initializer type_name
                    struct_declaration_list struct_declaration
                    struct_declarator_list struct_declarator
                    parameter_type_list parameter_list parameter_declaration
                    direct_abstract_declarator abstract_declarator
                    translation_unit external_declaration function_definition

%type <type> type_specifier struct_or_union_specifier declaration_specifiers
             type_qualifier function_specifier specifier_qualifier_list
             type_qualifier_list storage_class_specifier
             

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
}	| postfix_expression '.' IDENTIFIER {
      AttributeReferenceNode *node = new AttributeReferenceNode($1, ".", $3);
      $$ = node;
}	| postfix_expression PTR_OP IDENTIFIER {
      AttributeReferenceNode *node = new AttributeReferenceNode($1, "->", $3);
      $$ = node;
}	| postfix_expression INC_OP {
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
      ArgumentListNode *node = (ArgumentListNode*)$1; 
     	ArgumentListNode *arg = new ArgumentListNode($3, NULL);
   	$$ = node;
   	ArgumentListNode *argList = node;
   	while(argList->nextExpression()!=NULL){
   	   argList = argList->nextExpression();
      }
      argList->nextExpression(arg);
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
}	| SIZEOF unary_expression  {
      ExpressionDeclarationNode *expr = new ExpressionDeclarationNode($2);
      SizeOfNode *node = new SizeOfNode(expr);
      $$ = node;
}	| SIZEOF '(' type_name ')'  {
      SizeOfNode *node = new SizeOfNode($3);
      $$ = node;
}	| ALIGNOF '(' type_name ')'  { $$ = NULL; }
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
   	CastNode *node = new CastNode($2,$4);
   	$$ = node;
}	;

multiplicative_expression
	: cast_expression { $$ = $1; }
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
	: declaration_specifiers ';' {
      DeclarationSpecifierNode *node = new DeclarationSpecifierNode($1);
      $$ = node;
}	| declaration_specifiers init_declarator_list ';' {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode($1);
      VariableDeclarationNode *node = new VariableDeclarationNode(specifier, $2);
      $$ = node;
}	| static_assert_declaration {
      
}	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers {
      TypeCompositionNode *node = new TypeCompositionNode($1, (TypeCompositionNode*)$2);
      $$ = node;
}	| storage_class_specifier {
      TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	| type_specifier declaration_specifiers {
	   TypeCompositionNode *node = new TypeCompositionNode($1, (TypeCompositionNode*)$2);
	   $$ = node;
}	| type_specifier {
	   TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	| type_qualifier declaration_specifiers {
	   TypeCompositionNode *node = new TypeCompositionNode($1, (TypeCompositionNode*)$2);
	   $$ = node;
}	| type_qualifier {
	   TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	| function_specifier declaration_specifiers {
	   TypeCompositionNode *node = new TypeCompositionNode($1, (TypeCompositionNode*)$2);
	   $$ = node;
}	| function_specifier {
	   TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	| alignment_specifier declaration_specifiers
	| alignment_specifier
	;

init_declarator_list
	: init_declarator {
	   DeclarationListNode *node = new DeclarationListNode($1, NULL);
	   $$ = node;
}	| init_declarator_list ',' init_declarator {
	   DeclarationListNode *node = (DeclarationListNode *)$1;
	   $$ = node;
	   DeclarationListNode *decl = node;
	   while(decl->nextDeclaration()!=NULL){
	      decl = decl->nextDeclaration();
      }
      decl->nextDeclaration(new DeclarationListNode($3, NULL));
}	;

init_declarator
	: declarator '=' initializer {
	   AssignmentNode *node = new AssignmentNode($1, $3);
	   $$ = node;
}	| declarator { $$ = $1; }
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_EXTERN);
	   $$ = node;
}	| STATIC {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
	   $$ = node;
}	| THREAD_LOCAL {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_THREAD_LOCAL);
	   $$ = node;
}	| AUTO {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_AUTO);
	   $$ = node;
}	| REGISTER {
	   StorageSpecifierNode *node = new StorageSpecifierNode(StorageSpecifier::TYPE_REGISTER);
	   $$ = node;
}	;

type_specifier
	: VOID {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_VOID);
	   $$ = node;
}	| CHAR {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_CHAR);
	   $$ = node;
}	| SHORT {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SHORT);
	   $$ = node;
}	| INT {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_INT);
	   $$ = node;
}	| LONG {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_LONG);
	   $$ = node;
}	| FLOAT {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_FLOAT);
	   $$ = node;
}	| DOUBLE {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_DOUBLE);
	   $$ = node;
}	| SIGNED {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_SIGNED);
	   $$ = node;
}	| UNSIGNED {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_UNSIGNED);
	   $$ = node;
}	| BOOL {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_BOOL);
	   $$ = node;
}	| COMPLEX {
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_COMPLEX);
	   $$ = node;
}	| IMAGINARY {	  	/* non-mandated extension */
	   PrimitiveTypeNode *node = new PrimitiveTypeNode(TYPE_IMAGINARY);
	   $$ = node;
}	| atomic_type_specifier
	| struct_or_union_specifier { $$ = $1; }
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}' {
      TypeNode *node = NULL;
      if(strcmp($1,"struct")==0){
         node = new StructTypeNode("", $3);
      }else if(strcmp($1,"union")==0){
         node = new UnionTypeNode("", $3);
      }
      $$ = node;    
}	| struct_or_union IDENTIFIER '{' struct_declaration_list '}' {
      TypeNode *node = NULL;
      if(strcmp($1,"struct")==0){
         node = new StructTypeNode($2, $4);
      }else if(strcmp($1,"union")==0){
         node = new UnionTypeNode($2, $4);
      }
      $$ = node;      
}	| struct_or_union IDENTIFIER {
      TypeNode *node = NULL;
      if(strcmp($1,"struct")==0){
         node = new StructTypeNode($2, NULL);
      }else if(strcmp($1,"union")==0){
         node = new UnionTypeNode($2, NULL);
      }
      $$ = node;
}	;

struct_or_union
	: STRUCT { $$ = (char*)"struct"; }
	| UNION { $$ = (char*)"union"; }
	;

struct_declaration_list
	: struct_declaration {
      DeclarationSequenceNode *node = new DeclarationSequenceNode($1, NULL);
      $$ = node;
}	| struct_declaration_list struct_declaration {
      DeclarationSequenceNode *node = (DeclarationSequenceNode*)$1; 
     	DeclarationSequenceNode *decl = new DeclarationSequenceNode($2, NULL);
   	$$ = node;
   	DeclarationSequenceNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}	;

struct_declaration
	: specifier_qualifier_list ';' {	/* for anonymous struct/union */
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode($1);
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(specifier, NULL);
	   $$ = node;
}	| specifier_qualifier_list struct_declarator_list ';' {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode($1);
	   AttributeDeclarationNode *node = new AttributeDeclarationNode(specifier, $2);
	   $$ = node;
}	| static_assert_declaration { $$ = NULL; }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {
	   TypeCompositionNode *node = new TypeCompositionNode($1, (TypeCompositionNode*)$2);
	   $$ = node;
}	| type_specifier {
	   TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	| type_qualifier specifier_qualifier_list {
	   TypeCompositionNode *node = new TypeCompositionNode($1, (TypeCompositionNode*)$2);
	   $$ = node;
}	| type_qualifier {
	   TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	;

struct_declarator_list
	: struct_declarator {
	   DeclarationListNode *node = new DeclarationListNode($1, NULL);
	   $$ = node;
}	| struct_declarator_list ',' struct_declarator {
	   DeclarationListNode *node = (DeclarationListNode*)$1; 
     	DeclarationListNode *decl = new DeclarationListNode($3, NULL);
   	$$ = node;
   	DeclarationListNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}	;

struct_declarator
	: ':' constant_expression {
      ExpressionDeclarationNode *init = new ExpressionDeclarationNode($2);
	   AttributeInitializerNode *node = new AttributeInitializerNode(NULL, init);
	   $$ = node;
}	| declarator ':' constant_expression {
      ExpressionDeclarationNode *init = new ExpressionDeclarationNode($3);
	   AttributeInitializerNode *node = new AttributeInitializerNode($1, init);
	   $$ = node;
}	| declarator {
	   AttributeInitializerNode *node = new AttributeInitializerNode($1, NULL);
	   $$ = node;
}	;

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
	: CONST {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_CONST);
	   $$ = node;
}	| RESTRICT {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_RESTRICT);
	   $$ = node;
}	| VOLATILE {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_VOLATILE);
	   $$ = node;
}	| ATOMIC {
	   QualifierTypeNode *node = new QualifierTypeNode(TYPE_ATOMIC);
	   $$ = node;
}	;

function_specifier
	: INLINE {
	   FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_INLINE);
	   $$ = node;
}	| NORETURN {
      FunctionSpecifierNode *node = new FunctionSpecifierNode(TYPE_NORETURN);
	   $$ = node;
}	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator {
	   PointerDeclaratorNode *pointer = (PointerDeclaratorNode *)$1;
	   DeclaratorNode *node = new DeclaratorNode($2);
	   
	   $$ = pointer;
	   
	   PointerDeclaratorNode *ptr = pointer;
	   while(ptr->declaration()!=NULL){
	      ptr = (PointerDeclaratorNode *)(ptr->declaration());
      }
      ptr->declaration(node);
      
}	| direct_declarator {
	   DeclaratorNode *node = new DeclaratorNode($1);
	   $$ = node;
}	;

direct_declarator
	: IDENTIFIER {
      IdentifierDeclarationNode *node = new IdentifierDeclarationNode($1);
      $$ = node;
      
      if(symbolTable.isAtCurrentScope($1)){
         printf("Identifier %s is already defined\n", $1);
         yyerror("Duplicate definition.\n");
      }
      printf("adding ID %s to symtab in scope %d.\n", $1, symbolTable.scopeCount());
      IdentifierInformation *idInfo = new IdentifierInformation($1);
      
      symbolTable.insertAtCurrentScope(idInfo);
      
}	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '[' ']' {
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, $1, NULL);
	   $$ = node;
}	| direct_declarator '[' '*' ']' {
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, $1, NULL);
	   $$ = node;
}	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']' {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)$4);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode($5);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, $1, expr);
      $$ = node;
}	| direct_declarator '[' STATIC assignment_expression ']' {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, NULL);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode($4);
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, $1, expr);
	   $$ = node;
}	| direct_declarator '[' type_qualifier_list '*' ']' {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)$3;
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, $1, NULL);
      $$ = node;
}	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' {
      StorageSpecifierNode *storageSpecifier = new StorageSpecifierNode(StorageSpecifier::TYPE_STATIC);
      TypeCompositionNode *qualifiers = new TypeCompositionNode(storageSpecifier, (TypeCompositionNode *)$3);
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode($5);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, $1, expr);
      $$ = node;
}	| direct_declarator '[' type_qualifier_list assignment_expression ']' {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)$3;
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode($4);
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, $1, expr);
      $$ = node;
}	| direct_declarator '[' type_qualifier_list ']' {
      TypeCompositionNode *qualifiers = (TypeCompositionNode *)$3;
      ArrayDeclarationNode *node = new ArrayDeclarationNode(qualifiers, $1, NULL);
      $$ = node;
}	| direct_declarator '[' assignment_expression ']' {
	   ExpressionDeclarationNode *expr = new ExpressionDeclarationNode($3);
	   ArrayDeclarationNode *node = new ArrayDeclarationNode(NULL, $1, expr);
	   $$ = node;
}	| direct_declarator '(' parameter_type_list ')' {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode($1, (ParameterListNode *)$3);
	   $$ = node;
}	| direct_declarator '(' ')' {
	   FunctionDeclaratorNode *node = new FunctionDeclaratorNode($1, NULL);
	   $$ = node;
}	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' type_qualifier_list pointer {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode((TypeCompositionNode *)$2, $3);
	   $$ = node;
}	| '*' type_qualifier_list {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode((TypeCompositionNode *)$2, NULL);
	   $$ = node;
}	| '*' pointer {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode(NULL, $2);
	   $$ = node;
}	| '*' {
	   PointerDeclaratorNode *node = new PointerDeclaratorNode(NULL, NULL);
	   $$ = node;
}	;

type_qualifier_list
	: type_qualifier {
	   TypeCompositionNode *node = new TypeCompositionNode($1, NULL);
	   $$ = node;
}	| type_qualifier_list type_qualifier {
	   TypeCompositionNode *node = new TypeCompositionNode($2, (TypeCompositionNode *)$1);
	   $$ = node;
}	;


parameter_type_list
	: parameter_list ',' ELLIPSIS {
	   EllipsisParameterNode *ellipsis = new EllipsisParameterNode();
	   ParameterListNode *node = (ParameterListNode *)$1;
	   $$ = node;
	   ParameterListNode *parameter = node;
	   while(parameter->nextParameter()!=NULL){
	      parameter = parameter->nextParameter();
      }
      parameter->nextParameter(new ParameterListNode(ellipsis, NULL));
}	| parameter_list { $$ = $1; }
	;

parameter_list
	: parameter_declaration {
	   ParameterListNode *node = new ParameterListNode($1, NULL);
	   $$ = node;
}	| parameter_list ',' parameter_declaration {
	   ParameterListNode *node = (ParameterListNode *)$1;
	   $$ = node;
	   ParameterListNode *parameter = node;
	   while(parameter->nextParameter()!=NULL){
	      parameter = parameter->nextParameter();
      }
      parameter->nextParameter(new ParameterListNode($3, NULL));
}	;

parameter_declaration
	: declaration_specifiers declarator {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode($1, $2);
	   $$ = node;
}	| declaration_specifiers abstract_declarator {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode($1, $2);
	   $$ = node;      
}	| declaration_specifiers {
	   ParameterDeclarationNode *node = new ParameterDeclarationNode($1, NULL);
	   $$ = node;      
}	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode($1);
      TypeDeclarationNode *node = new TypeDeclarationNode(specifier, $2);
      $$ = node;
}	| specifier_qualifier_list {
      DeclarationSpecifierNode *specifier = new DeclarationSpecifierNode($1);
      TypeDeclarationNode *node = new TypeDeclarationNode(specifier, NULL);
      $$ = node;
}	;


abstract_declarator
	: pointer direct_abstract_declarator  {
	   PointerDeclaratorNode *pointer = (PointerDeclaratorNode *)$1;
	   DeclaratorNode *node = new DeclaratorNode($2);
	   
	   $$ = pointer;
	   
	   PointerDeclaratorNode *ptr = pointer;
	   while(ptr->declaration()!=NULL){
	      ptr = (PointerDeclaratorNode *)(ptr->declaration());
      }
      ptr->declaration(node);
      
}	| pointer {
	   DeclaratorNode *node = new DeclaratorNode($1);
	   $$ = node;
}	| direct_abstract_declarator {
	   DeclaratorNode *node = new DeclaratorNode($1);
	   $$ = node;
}	;

direct_abstract_declarator
	: '(' abstract_declarator ')' { $$ = $2; }
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
	| assignment_expression {
	   ExpressionDeclarationNode *node = new ExpressionDeclarationNode($1);
	   $$ = node;
}	;

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
	: labeled_statement { $$ = $1; }
	| compound_statement { $$ = $1; }
	| expression_statement { $$ = $1; }
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| jump_statement { $$ = $1; }
	;

labeled_statement
	: IDENTIFIER ':' statement {
	   LabeledStatementNode *node = new LabeledStatementNode($1, $3);
	   $$ = node;
}	| CASE constant_expression ':' statement {
	   CaseStatementNode *node = new CaseStatementNode($2, $4);
	   $$ = node;
}	| DEFAULT ':' statement {
	   CaseStatementNode *node = new CaseStatementNode(NULL, $3);
	   $$ = node;
}	;

compound_statement
	: '{' '}' { $$ = NULL; }
	| '{' {printf("begin scope\n"); ::symbolTable.pushScope();} block_item_list {delete ::symbolTable.popScope();printf("end scope\n");}'}' { $$ = $3; }
	;

block_item_list
	: block_item {
	   CompoundStatementNode *node = new CompoundStatementNode($1, NULL);
	   $$ = node;
}	| block_item_list block_item {
	   CompoundStatementNode *node = (CompoundStatementNode*)$1; 
     	CompoundStatementNode *stmt = new CompoundStatementNode($2, NULL);
   	$$ = node;
   	CompoundStatementNode *stmtList = node;
   	while(stmtList->nextStatement()!=NULL){
   	   stmtList = stmtList->nextStatement();
      }
      stmtList->nextStatement(stmt);
}	;

block_item
	: declaration {
	   DeclarationStatementNode *node = new DeclarationStatementNode($1);
	   $$ = node;
}	| statement { $$ = $1; }
	;

expression_statement
	: ';' { $$ = NULL; }
	| expression ';' { 
	   ExpressionStatementNode *node = new ExpressionStatementNode($1);
	   $$ = node;
}	;

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
}	| FOR '(' expression_statement expression_statement ')' statement {
      ForNode *node = new ForNode($3, (ExpressionStatementNode*)$4, NULL, $6);
      $$ = node;
}	| FOR '(' expression_statement expression_statement expression ')' statement {
      ForNode *node = new ForNode($3, (ExpressionStatementNode*)$4, $5, $7);
      $$ = node;
}	| FOR '(' declaration expression_statement ')' statement {
      DeclarationStatementNode *init = new DeclarationStatementNode($3);
      ForNode *node = new ForNode(init,(ExpressionStatementNode*) $4, NULL, $6);
      $$ = node;
}	| FOR '(' declaration expression_statement expression ')' statement {
      DeclarationStatementNode *init = new DeclarationStatementNode($3);
      ForNode *node = new ForNode(init, (ExpressionStatementNode*)$4, $5, $7);
      $$ = node;
}	;

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
	: external_declaration {
	   DeclarationSequenceNode *node = new DeclarationSequenceNode($1, NULL);
	   $$ = node;
	   astRoot = node;
}	| translation_unit external_declaration {
	   DeclarationSequenceNode *node = (DeclarationSequenceNode*)$1; 
     	DeclarationSequenceNode *decl = new DeclarationSequenceNode($2, NULL);
   	$$ = node;
   	astRoot = node; //update AST root
   	DeclarationSequenceNode *declList = node;
   	while(declList->nextDeclaration()!=NULL){
   	   declList = declList->nextDeclaration();
      }
      declList->nextDeclaration(decl);
}	;

external_declaration
	: function_definition { $$ = $1; }
	| declaration { $$ = $1; }
	;

function_definition
	: declaration_specifiers declarator declaration_list {printf("defining function.\n");} compound_statement {
      FunctionDeclarationNode *node = new FunctionDeclarationNode($1, $2, $5);
      $$ = node;	   
}	| declaration_specifiers declarator {printf("defining function.\n");} compound_statement {
      FunctionDeclarationNode *node = new FunctionDeclarationNode($1, $2, $4);
      $$ = node;
}	;

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

