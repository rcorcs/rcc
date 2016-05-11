%{
#include <string>
using std::string;

#include <stdio.h>
#include <string.h>

#include "../parser/yy_parser.h"
#include "preprocessor.h"

//int yylineno;

struct bufstack {
   struct bufstack *prev; // previous entry
   YY_BUFFER_STATE bs;    // saved buffer
   int lineno;            // saved line number
   char *filename;        // name of this file
   char *path;            // path of this file
   FILE *f;               // current file
   deftab *deffunctable;
} *curbs = 0;

char *curfilename;   // name of current input file

deftab defs;

int newfile(char *fn);
int popfile(void);
int scanstring(const char *str);

void count();
//void comment();
//int check_type();
int check_def();

char * lexeme();

%}

%{

extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);
%}

%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%option noyywrap
%option yylineno
%x IFILE
%x MACRO
%x DEFINE 
%x DEFVAR DEFVARVAL
%x DEFFUNC DEFFUNCPARAM
%x ACTDEFFUNC ACTPARAMDEFFUNC
%x MACROIF
%x MACROIFDEF
%x MACROIFNDEF
%x IGNOREIF IGNOREELSE
%x MACROERROR
%x MACROERRORSTRING

%%

^"#"[ \t]*			{ BEGIN(MACRO); }
<MACRO>include[ \t]*[\"<]	{ BEGIN(IFILE); }
<MACRO>define[ \t]+		{ startdef(); BEGIN(DEFINE); }
<MACRO>error			{ BEGIN(MACROERROR); }
<MACRO>if[ \t]+			{ BEGIN(MACROIF); }
<MACRO>ifdef[ \t]+		{ BEGIN(MACROIFDEF); }
<MACRO>ifndef[ \t]+		{ BEGIN(MACROIFNDEF); }
<MACRO>endif			{ /*decrement a counter, if counter 0, error */ BEGIN(INITIAL); }
<MACRO>else			{ /*if counter 0, error */ BEGIN(IGNOREELSE); }


<IFILE>[^ \t\n\">]+	{
	{int c;
         while((c=yyinput()) && c!='\n');
        }
        yylineno++;
        if(!newfile(yytext))
            yyterminate(); //no such file
        BEGIN(INITIAL);
}
<IFILE>.|\n			{ fprintf(stderr, "%4d bad include line\n", yylineno); yyterminate(); }

<DEFINE>{L}({L}|{D})*"("	{ yytext[yyleng-1] = '\0'; setdefid(yytext); define = new deffunc(defid); BEGIN(DEFFUNC); }
<DEFINE>{L}({L}|{D})*		{ setdefid(yytext); define = new defvar(defid); BEGIN(DEFVAR); }

<DEFVAR>[ \t]+			{ BEGIN(DEFVARVAL); }
<DEFVAR>\n			{ define->val(defval); deftable.insert(define); finishdef(); printdef(); BEGIN(INITIAL); }
<DEFVARVAL>[^\n\\]+		{ appenddefval(yytext); BEGIN(DEFVARVAL); }
<DEFVARVAL>\n			{ define->val(defval); deftable.insert(define); finishdef(); printdef(); BEGIN(INITIAL); }
<DEFVARVAL>\\[ \t]*\n		{ appenddefval("\n"); BEGIN(DEFVARVAL); }
<DEFVARVAL>.			{ /* error */ yyterminate(); }

<DEFFUNC>[ \t]*")"[ \t]+        { BEGIN(DEFVARVAL); }
<DEFFUNC>[ \t]+                 { BEGIN(DEFFUNCPARAM); }
<DEFFUNC>{L}({L}|{D})*		{ ((deffunc *)define)->insertparam(yytext); BEGIN(DEFFUNCPARAM); }
<DEFFUNC>.|\n			{ /*error*/ yyterminate(); }

<DEFFUNCPARAM>{L}({L}|{D})*	{ ((deffunc *)define)->insertparam(yytext); BEGIN(DEFFUNCPARAM); }
<DEFFUNCPARAM>[ \t]*","[ \t]*	{ BEGIN(DEFFUNCPARAM); }
<DEFFUNCPARAM>[ \t]*")"[ \t]+	{ BEGIN(DEFVARVAL); }
<DEFFUNCPARAM>.|\n		{ /*error*/ yyterminate(); }

<MACROIF>[^\n]			{ /* evaluate(yytext); */ }
<MACROIFDEF>{L}({L}|{D})*	{ if( deftable.contains(yytext) ) { /*increment a counter*/ BEGIN(INITIAL); } else BEGIN(IGNOREIF); }
<MACROIFNDEF>{L}({L}|{D})*	{ if( !deftable.contains(yytext) ){ /*increment a counter*/ BEGIN(INITIAL); } else BEGIN(IGNOREIF); }

<IGNOREIF>[^#]			{}
<IGNOREIF>#[ \t]*else		{ BEGIN(INITIAL); }
<IGNOREIF>#[ \t]*elsif		{ BEGIN(MACROIF); }
<IGNOREIF>#[ \t]*endif		{ BEGIN(INITIAL); }
<IGNOREIF>#			{}
<IGNOREIF><<EOF>>		{ /*error*/ yyterminate(); }

<IGNOREELSE>[^#]		{}
<IGNOREELSE>#[ \t]*endif	{ BEGIN(INITIAL); }
<IGNOREELSE><<EOF>>		{ /*error*/ yyterminate(); }

<ACTDEFFUNC>[ \t\n]*            { }
<ACTDEFFUNC>"("                 { defactpidx = 0; startdef(); define = new defvar(deff->getparam(defactpidx)); BEGIN(ACTPARAMDEFFUNC);}
<ACTDEFFUNC>.                   { /*error*/ yyterminate(); }
<ACTDEFFUNC><<EOF>>		{ /*error*/ yyterminate(); }

<ACTPARAMDEFFUNC>{L}({L}|{D})*         { 
   if(curbs->deffunctable){
      def *d = curbs->deffunctable->get(yytext);
      if(d) {
         appenddefval(d->val());
      } else appenddefval(yytext);
   }else appenddefval(yytext);
}
<ACTPARAMDEFFUNC>[^",""("")"]         { appenddefval(yytext); }
<ACTPARAMDEFFUNC>"("         	{ definb++;  appenddefval(yytext); }
<ACTPARAMDEFFUNC>","         	{
   if(definb>0){
      appenddefval(yytext);
   }else {
      define->val(defval);
      deffunctable->insert(define);
      finishdef();
      /* printdef(); */
      defactpidx++;
      if(defactpidx==deff->totalparams()){
         /*error*/ yyterminate();
      }else{
         startdef();
         define = new defvar(deff->getparam(defactpidx));
      }
   }
}
<ACTPARAMDEFFUNC>")"         	{
   if((--definb)<0){
      if( (defactpidx+1)==deff->totalparams() ){
         define->val(defval);
         deffunctable->insert(define);
         finishdef();
         /* printdef(); */
         scanstring( deff->val() );
         deff = NULL;
         BEGIN(INITIAL);
      }else{
         /*error*/ yyterminate();
      }
   }else{
      appenddefval(yytext);
   }
}

<MACROERROR>[ \t]*			{ }
<MACROERROR>\"				{ BEGIN(MACROERRORSTRING); }
<MACROERROR>\n				{ BEGIN(INITIAL); }
<MACROERROR>.				{ /*error*/ yyterminate(); }

<MACROERRORSTRING>(\\.|[^\\"])*		{ fprintf(stderr, "%s\n", yytext); }
<MACROERRORSTRING>\"			{ BEGIN(MACROERROR); }

"/*"                                    { comment(); }
"//".*                                    { /* consume //-comment */ }

"auto"					{ count(); return(AUTO); }
"break"					{ count(); return(BREAK); }
"case"					{ count(); return(CASE); }
"char"					{ count(); return(CHAR); }
"const"					{ count(); return(CONST); }
"continue"				{ count(); return(CONTINUE); }
"default"				{ count(); return(DEFAULT); }
"do"					{ count(); return(DO); }
"double"				{ count(); return(DOUBLE); }
"else"					{ count(); return(ELSE); }
"enum"					{ count(); return(ENUM); }
"extern"				{ count(); return(EXTERN); }
"float"					{ count(); return(FLOAT); }
"for"					{ count(); return(FOR); }
"goto"					{ count(); return(GOTO); }
"if"					{ count(); return(IF); }
"inline"				{ count(); return(INLINE); }
"int"					{ count(); return(INT); }
"long"					{ count(); return(LONG); }
"register"				{ count(); return(REGISTER); }
"restrict"				{ count(); return(RESTRICT); }
"return"				{ count(); return(RETURN); }
"short"					{ count(); return(SHORT); }
"signed"				{ count(); return(SIGNED); }
"sizeof"				{ count(); return(SIZEOF); }
"static"				{ count(); return(STATIC); }
"struct"				{ count(); return(STRUCT); }
"switch"				{ count(); return(SWITCH); }
"typedef"				{ count(); return(TYPEDEF); }
"union"					{ count(); return(UNION); }
"unsigned"				{ count(); return(UNSIGNED); }
"void"					{ count(); return(VOID); }
"volatile"				{ count(); return(VOLATILE); }
"while"					{ count(); return(WHILE); }
"_Alignas"                              { count(); return ALIGNAS; }
"_Alignof"                              { count(); return ALIGNOF; }
"_Atomic"                               { count(); return ATOMIC; }
"_Bool"                                 { count(); return BOOL; }
"_Complex"                              { count(); return COMPLEX; }
"_Generic"                              { count(); return GENERIC; }
"_Imaginary"                            { count(); return IMAGINARY; }
"_Noreturn"                             { count(); return NORETURN; }
"_Static_assert"                        { count(); return STATIC_ASSERT; }
"_Thread_local"                         { count(); return THREAD_LOCAL; }
"__func__"                              { count(); return FUNC_NAME; }

{L}{A}*					{ count(); if(!check_def()) { yylval.lexeme = lexeme(); return check_type(); } }

{HP}{H}+{IS}?				{ count(); yylval.lexeme = lexeme(); return I_CONSTANT; }
{NZ}{D}*{IS}?				{ count(); yylval.lexeme = lexeme(); return I_CONSTANT; }
"0"{O}*{IS}?				{ count(); yylval.lexeme = lexeme(); return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ count(); yylval.lexeme = lexeme(); return I_CONSTANT; }

{D}+{E}{FS}?				{ count(); yylval.lexeme = lexeme(); return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ count(); yylval.lexeme = lexeme(); return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ count(); yylval.lexeme = lexeme(); return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ count(); yylval.lexeme = lexeme(); return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ count(); yylval.lexeme = lexeme(); return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ count(); yylval.lexeme = lexeme(); return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ count(); yylval.lexeme = lexeme(); return STRING_LITERAL; }

"..."					{ count(); return ELLIPSIS; }
">>="					{ count(); return RIGHT_ASSIGN; }
"<<="					{ count(); return LEFT_ASSIGN; }
"+="					{ count(); return ADD_ASSIGN; }
"-="					{ count(); return SUB_ASSIGN; }
"*="					{ count(); return MUL_ASSIGN; }
"/="					{ count(); return DIV_ASSIGN; }
"%="					{ count(); return MOD_ASSIGN; }
"&="					{ count(); return AND_ASSIGN; }
"^="					{ count(); return XOR_ASSIGN; }
"|="					{ count(); return OR_ASSIGN; }
">>"					{ count(); return RIGHT_OP; }
"<<"					{ count(); return LEFT_OP; }
"++"					{ count(); return INC_OP; }
"--"					{ count(); return DEC_OP; }
"->"					{ count(); return PTR_OP; }
"&&"					{ count(); return AND_OP; }
"||"					{ count(); return OR_OP; }
"<="					{ count(); return LE_OP; }
">="					{ count(); return GE_OP; }
"=="					{ count(); return EQ_OP; }
"!="					{ count(); return NE_OP; }
";"					{ count(); return ';'; }
("{"|"<%")				{ count(); return '{'; }
("}"|"%>")				{ count(); return '}'; }
","					{ count(); return ','; }
":"					{ count(); return ':'; }
"="					{ count(); return '='; }
"("					{ count(); return '('; }
")"					{ count(); return ')'; }
("["|"<:")				{ count(); return '['; }
("]"|":>")				{ count(); return ']'; }
"."					{ count(); return '.'; }
"&"					{ count(); return '&'; }
"!"					{ count(); return '!'; }
"~"					{ count(); return '~'; }
"-"					{ count(); return '-'; }
"+"					{ count(); return '+'; }
"*"					{ count(); return '*'; }
"/"					{ count(); return '/'; }
"%"					{ count(); return '%'; }
"<"					{ count(); return '<'; }
">"					{ count(); return '>'; }
"^"					{ count(); return '^'; }
"|"					{ count(); return '|'; }
"?"					{ count(); return '?'; }

{WS}+					{ count(); /* whitespace separates tokens */ }

<<EOF>>			{ if ( !popfile() ) { yyterminate(); if(deffunctable){ delete deffunctable; deff = NULL; deffunctable = NULL; } } }
.					{ count(); yyerror("lexical error"); /* discard bad characters */ }


%%

//int yywrap(void)        /* called at end of input */
//{
//    return 1;           /* terminate now */
//}

static void comment(void)
{
    int c;

    while ((c = yyinput()) != 0)
        if (c == '*')
        {
            while ((c = yyinput()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("unterminated comment");
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
}


int column = 0;
string line = "";

void count()
{
	int i;

   line.append(yytext);
   
	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n'){
		   line = "";
		   line.append(yytext+i+1);
			column = 0;
		}else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;
   
	//ECHO;
}

char *lexeme()
{
   char * lexeme = new char[yyleng + 1];
   strcpy(lexeme, yytext);   
   return lexeme;
   //return yytext;
}

int check_def()
{
   def *d;
   if(curbs->deffunctable){
      d = curbs->deffunctable->get(yytext);
      if( d ) {
         scanstring( d->val() );
         return 1;
      }
   }
   
   d = deftable.get(yytext);
   if( d ) {
      if(d->type()==DEFFUNC_TYPE) {
	 deff = (deffunc*)d;
         deffunctable = new deftab();
         BEGIN(ACTDEFFUNC);
         return 1;
      }else {
         scanstring( d->val() );
         return 1;
      }
   }else return 0;
}

int newfile(char *fn)
{
   FILE *f = fopen( fn, "r" );
   struct bufstack *bs = (struct bufstack *)malloc(sizeof(struct bufstack));
   char *path;
   //die if no file or no room
   if(!f) { return 0; }
   if(!bs) { exit(1); }

   //remember state
   if(curbs){ 
      curbs->lineno = yylineno;
      if(curbs->path){
         //path = new 
      }
   }
   bs->prev = curbs;
   
   //set up current entry
   bs->bs = yy_create_buffer(f, YY_BUF_SIZE);
   bs->f = f;
   bs->deffunctable = NULL;
   bs->filename = fn;
   yy_switch_to_buffer(bs->bs);
   curbs = bs; 
   yylineno = 1;
   curfilename = fn;
   return 1;
}

int popfile(void)
{
   struct bufstack *bs = curbs;
   struct bufstack *prevbs;
   
   if(!bs) return 0;
   
   //get rid of current entry
   if(bs->f) fclose(bs->f);
   yy_delete_buffer(bs->bs);

   if(bs->deffunctable) delete bs->deffunctable;
   //switch back to previous
   prevbs = bs->prev;
   free(bs);
   
   if(!prevbs) return 0;
   
   yy_switch_to_buffer(prevbs->bs);
   curbs = prevbs;
   yylineno = curbs->lineno;
   curfilename = curbs->filename;
   return 1;
}

int scanstring(const char *str)
{
   //FILE *f = fopen( fn, "r" );
   struct bufstack *bs = (struct bufstack *)malloc(sizeof(struct bufstack));
   
   //die if no room
   if(!bs) { exit(1); }
   
   if(deffunctable){
      bs->deffunctable = deffunctable;
      deff = NULL;
      deffunctable = NULL;
   }else {
      bs->deffunctable = NULL;
   }

   //remember state
   if(curbs)curbs->lineno = yylineno;
   bs->prev = curbs;
   
   //set up current entry
   bs->bs = yy_scan_string(str);//yy_create_buffer(f, YY_BUF_SIZE);
   bs->f = NULL;
   bs->filename = NULL;
   yy_switch_to_buffer(bs->bs);
   curbs = bs; 
   curfilename = NULL;

   //BEGIN(INITIAL);

   return 1;

}
