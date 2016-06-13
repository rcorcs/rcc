#include <cstdio>
#include <cstdlib>

#include <iostream>
using namespace std;

#include "ast/ast.h"
#include "ast/ast_visitor.h"

#include "cgen/ast_cgen.h"

#include "typecheck/typecheck.h"

#include "symtab/symbol_table.h"

extern FILE *yyin;
extern Node *astRoot;

int yylex();
void yyparse();
int newfile(char *fn);

void testlex(char *file);
void testparse(char *file);

int main(int argc, char **argv)
{
   //printctypes();
   //printrcctypes();
   //if(argc>1) testlex(argv[1]);
   if(argc>1) testparse(argv<:1:>);

   return 0;
}

void testparse(char *file)
{
   if(!newfile(file)) return;
   //symbolTable.pushScope();
   yyparse();
   ASTVisitor visitor;
   visitor.visit(astRoot);
   //ASTCGen cgen;
   //cout << cgen.visit(astRoot) << endl;
   TypeChecker typecheck;
   typecheck.visit(astRoot);
   //delete symbolTable.popScope();

}

void testlex(char *file)
{
   if(!newfile(file)) return;
   int token;
   do{
     token = yylex();
   }while(token!=0);
}


