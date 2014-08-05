#ifndef RCC_DATATYPE_H
#define RCC_DATATYPE_H

#include <cstdlib>
#include <cstdio>
#include <cstring>

#define UNDEFINED_TYPE 0
class datatype {
public:
   datatype();
   ~datatype();

   unsigned int type();
   virtual const char *name() = 0;
   virtual size_t size() = 0;
   
protected:
   unsigned int _type;
   //const char *_name;
   //size_t _size;
};

#endif
