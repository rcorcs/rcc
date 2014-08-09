#ifndef RCC_STRUCTTYPE_H
#define RCC_STRUCTTYPE_H

#include <map>
using std::map;
using std::pair;

#include "primitivetypes.h"
#include "../idinfos.h"

#define STRUCT_TYPE 200000
class structtype : public datatype {
public:
   structtype(const char *n);
   ~structtype();

   void add_attr(idinfo* info);

   const char *name();
   const char *sname();
   
   size_t size();
protected:
   string _name;
   const char *_sname;
   map<string, idinfo*> _attr;
};

#endif
