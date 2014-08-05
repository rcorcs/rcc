#include "datatype.h"

datatype::datatype()
  : _type(UNDEFINED_TYPE)
{
}

datatype::~datatype()
{
}

unsigned int datatype::type()
{
   return _type;
}

/*
const char *datatype::name()
{
   return _name;
}

size_t datatype::size()
{
   return _size;
}
*/
