#ifndef RCC_DEF_H
#define RCC_DEF_H

#include <cstring>

class def {
public:
   def(int type, const char *id);
   def(int type, const char *id, const char *val);
   ~def();

   int type();

   const char *id();

   const char *val(const char *v);
   const char *val();

protected:
   int _type;
   char *_id;
   char *_val;
};

#endif
