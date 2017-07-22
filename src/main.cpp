#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <string>
using namespace std;

#include "ast/ast.h"
#include "ast/ast_visitor.h"

#include "cgen/ast_cgen.h"

#include "llgen/ast_llgen.h"

#include "typecheck/typecheck.h"

#include "symtab/symbol_table.h"

extern FILE *yyin;
extern Node *astRoot;

int yylex();
void yyparse();
int newfile(char *fn);

void scan(char *file);

void compile(char *file);

int main(int argc, char **argv){
   for(int fileid = 1; fileid<argc; fileid++){
      compile(argv[fileid]);
   }
   return 0;
}

void compile(char *file){
   if(!newfile(file)) return;

   yyparse();

   ASTVisitor visitor;
   visitor.visit(astRoot);

   /*
   cout << "Pretty Printer: CGen" << endl;
   ASTCGen cgen;
   cout << cgen.visit(astRoot) << endl;
   */

   TypeChecker typecheck;
   typecheck.visit(astRoot);

   ASTLLGen llgen(file);
   llgen.visit(astRoot);

   cout << "Dumping Module" << endl;
   llgen.dump();

   //string filename(file);
   //llgen.writeAssembly(filename+".ll");
}

void scan(char *file){
   if(!newfile(file)) return;
   int token;
   do{
     token = yylex();
   }while(token!=0);
}

