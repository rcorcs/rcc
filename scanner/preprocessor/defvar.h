#ifndef RCC_DEFVAR_H
#define RCC_DEFVAR_H

#include "def.h"

#define DEFVAR_TYPE 100
class defvar : public def {
public:
   defvar(const char *id);
   defvar(const char *id, const char *val);
   ~defvar();
};

#endif

