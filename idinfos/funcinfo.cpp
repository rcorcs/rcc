#include "funcinfo.h"

funcinfo::funcinfo(const char *id, datatype *dt, unsigned int scopelvl)
   : idinfo( FUNCINFO, id, scopelvl )
{
   _rettype = dt;
}

funcinfo::~funcinfo()
{
   delete _rettype;
}
 
datatype *funcinfo::rettype()
{
   return _rettype;
}

datatype *funcinfo::rettype(datatype *dt)
{
   _rettype = dt;
}

