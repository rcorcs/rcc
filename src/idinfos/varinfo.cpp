#include "varinfo.h"

varinfo::varinfo(const char *id, datatype *dt, unsigned int scopelvl)
   : idinfo( VARINFO, id, scopelvl )
{
   _dtype = dt;
}

varinfo::~varinfo()
{
   delete _dtype;
}
 
datatype *varinfo::dtype()
{
   return _dtype;
}

datatype *varinfo::dtype(datatype *dt)
{
   _dtype = dt;
}

