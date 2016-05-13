#include <cstdio>
#include <cstdlib>

#include <iostream>
using namespace std;

#include "datatypes.h"

#include "symtab/symbol_table.h"
 
SymbolTable symbolTable;

extern FILE *yyin;
int yylex();
void yyparse();
int newfile(char *fn);

void printctypes();
void printrcctypes();
void printdt(datatype *dt);
void deldt(datatype *dt);

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
   symbolTable.pushScope();
   yyparse();
   delete symbolTable.popScope();

}

void testlex(char *file)
{
   if(!newfile(file)) return;
   int token;
   do{
     token = yylex();
   }while(token!=0);
}

void printdt(datatype *dt)
{
   cout << dt->name() << ": " << dt->size() << endl;
}

void deldt(datatype *dt)
{
   delete dt;
}

void printrcctypes()
{
   datatype *intt = new inttype();
   printdt(intt); deldt(intt);

   datatype *chart = new chartype();
   printdt(chart); deldt(chart);

   datatype *floatt = new floattype();
   printdt(floatt); deldt(floatt);

   datatype *doublet = new doubletype();
   printdt(doublet); deldt(doublet);

   datatype *uintt = new inttype(UNSIGNED_MODIFIER);
   printdt(uintt); deldt(uintt);

   datatype *uchart = new chartype(UNSIGNED_MODIFIER);
   printdt(uchart); deldt(uchart);

   datatype *sintt = new inttype(SIGNED_MODIFIER);
   printdt(sintt); deldt(sintt);

   datatype *schart = new chartype(SIGNED_MODIFIER);
   printdt(schart); deldt(schart);

   datatype *shortt = new inttype(SHORT_MODIFIER);
   printdt(shortt); deldt(shortt);

   datatype *ushortt = new inttype(UNSIGNED_MODIFIER+SHORT_MODIFIER);
   printdt(ushortt); deldt(ushortt);

   datatype *sshortt = new inttype(SIGNED_MODIFIER+SHORT_MODIFIER);
   printdt(sshortt); deldt(sshortt);

   datatype *longt = new inttype(LONG_MODIFIER);
   printdt(longt); deldt(longt);

   datatype *ldoublet = new doubletype(LONG_MODIFIER);
   printdt(ldoublet); deldt(ldoublet);

   datatype *llongt = new inttype(LONG_LONG_MODIFIER);
   printdt(llongt); deldt(llongt);

   datatype *ptrintt = new pointertype( new inttype() );
   printdt(ptrintt); deldt(ptrintt);

   datatype *ptrchart = new pointertype( new chartype() );
   printdt(ptrchart); deldt(ptrchart);

   datatype *ptrfloatt = new pointertype( new floattype() );
   printdt(ptrfloatt); deldt(ptrfloatt);

   datatype *ptrdoublet = new pointertype( new doubletype() );
   printdt(ptrdoublet); deldt(ptrdoublet);
   
   datatype *strctt = new structtype("mystruct");
   printdt(strctt); deldt(strctt);

}

void printctypes()
{
   printf("**************************************\n");
   printf("int %d\n", sizeof(int) );
   printf("char %d\n", sizeof(char) );
   printf("float %d\n", sizeof(float) );
   printf("double %d\n", sizeof(double) );
   
   printf("unsigned int %d\n", sizeof(unsigned int) );
   printf("unsigned char %d\n", sizeof(unsigned char) );

   printf("signed int %d\n", sizeof(signed int) );
   printf("signed char %d\n", sizeof(signed char) );

   printf("short int %d\n", sizeof(short int) );

   printf("long int %d\n", sizeof(long int) );
   printf("long double %d\n", sizeof(long double) );

   printf("long long int %d\n", sizeof(long long int) );

   printf("int* %d\n", sizeof(int *) );
   printf("char* %d\n", sizeof(char *) );
   printf("float* %d\n", sizeof(float *) );
   printf("double* %d\n", sizeof(double *) );
   printf("**************************************\n");
}
