#include "deffunc.h"

deffunc::deffunc(const char *id)
   : def(DEFFUNC_TYPE, id)
{
}

deffunc::~deffunc()
{
   for(int i = 0; i<_params.size(); i++)
      delete []_params.at(i);
}
   
void deffunc::insertparam(const char *param)
{
   char *p = new char[ strlen(param)+1 ];
   strcpy(p, param);
   _params.push_back(p);
}

int deffunc::totalparams()
{
   return _params.size(); 
}

char *deffunc::getparam(int i)
{
   return _params.at(i);
}
