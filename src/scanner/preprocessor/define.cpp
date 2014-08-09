#include "define.h"

def  *define;
char *defid;
char *defval;
deftab deftable;
deffunc *deff = NULL;
deftab *deffunctable = NULL;
int definb;
int defactpidx;

void startdef()
{
   definb = 0;
   define = NULL;
   defid = NULL;
   defval = NULL;
}

void finishdef()
{
   delete []defid;
   delete []defval;
}

void setdefid(const char *id)
{
   int idlen = strlen(id);
   defid = new char[idlen+1];
   strcpy(defid, id);
}

void appenddefval(const char *val)
{
   if(!defval){
      defval = new char[strlen(val)+1];
      strcpy(defval, val);
   }else{
      int dvlen = strlen(defval), vlen = strlen(val);
      //char *temp = new char[ dvlen+vlen+2 ];
      char *temp = new char[ dvlen+vlen+1 ];
      int i, idx = 0;
      strcpy(temp, defval);
      //temp[dvlen] = '\n';
      //temp[dvlen+1] = '\0';
      temp[dvlen] = '\0';
      strcat(temp, val);
      delete []defval;
      defval = temp; 
   }
}

void printdef()
{
   printf("/*\ndefine %s ", define->id());
   if(define->type()==DEFFUNC_TYPE){
      deffunc *func = (deffunc *)define;
      int countp = func->totalparams();
      for(int i = 0; i<countp; i++){
          printf("%s", func->getparam(i));
          if(i<(countp-1)) printf(", ");
      }
   }
   printf(" {\n", define->id());
   printf("%s\n}\n*/\n", define->val());
}

