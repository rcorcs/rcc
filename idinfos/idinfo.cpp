#include "idinfo.h"

idinfo::idinfo(unsigned int type, const char *id, unsigned int scopelvl)
{
   _id = new char[strlen(id)+1];
   strcpy(_id, id);
   
   _type = type;
   _scopelvl = scopelvl;
}

idinfo::~idinfo()
{
   delete _id;
}

unsigned int idinfo::type()
{
   return _type;
}

unsigned int idinfo::scopelvl()
{
   return _scopelvl;
}

const char *idinfo::id()
{
   return _id;
}
