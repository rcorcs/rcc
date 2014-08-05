#include "defvar.h"

defvar::defvar(const char *id)
  : def(DEFVAR_TYPE, id)
{
}

defvar::defvar(const char *id, const char *val)
  : def(DEFVAR_TYPE, id, val)
{
}

defvar::~defvar()
{
}


