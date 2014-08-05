#ifndef RCC_DEFFUNC_H
#define RCC_DEFFUNC_H

#include "def.h"

#include <vector>
using std::vector;

#define DEFFUNC_TYPE 200
class deffunc : public def {
public:
   deffunc(const char *id);
   ~deffunc();
   
   void insertparam(const char *param);
   int totalparams();
   char *getparam(int i);

private:
   vector<char *> _params;
};

#endif

