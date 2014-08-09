#ifndef RCC_PRIMITIVETYPE_H
#define RCC_PRIMITIVETYPE_H

#include "datatype.h"

#include <string>
using std::string;

#define NO_MODIFIER 0
#define SIGNED_MODIFIER 20
#define UNSIGNED_MODIFIER 10
#define SHORT_MODIFIER 1
#define LONG_MODIFIER 2
#define LONG_LONG_MODIFIER 3

class primitivetype : public datatype {
public:
   primitivetype();
   ~primitivetype();
   int modifier();
   const char *name();
   size_t size();
protected:
   //void modifer_name(int mod);
   int _modifier;
   string _name;
   size_t _size;
};

#define VOID_TYPE 100000
class voidtype : public primitivetype {
public:
   voidtype();
   ~voidtype();
};

#define BOOL_TYPE 100100
#define BOOL_SIZE 1
class booltype : public primitivetype {
public:
   booltype();
   ~booltype();
};

#define BYTE_TYPE 100200
#define BYTE_SIZE 1
class bytetype : public primitivetype {
public:
   bytetype();
   ~bytetype();
};

#define CHAR_TYPE 100300
#define CHAR_SIZE 1
class chartype : public primitivetype {
public:
   chartype(int mod=NO_MODIFIER);
   ~chartype();
};



#define INT_TYPE 100400
#define INT_SIZE 4
#define SHORT_SIZE 2
#define LONG_SIZE 4
#define LONG_LONG_SIZE 8
class inttype : public primitivetype {
public:
   inttype(int mod=NO_MODIFIER);
   ~inttype();
};

#define FLOAT_TYPE 100500
#define FLOAT_SIZE 4
class floattype : public primitivetype {
public:
   floattype();
   ~floattype();
};

#define DOUBLE_TYPE 100600
#define DOUBLE_SIZE 8
#define LDOUBLE_SIZE 12
class doubletype : public primitivetype {
public:
   doubletype(int mod=NO_MODIFIER);
   ~doubletype();
};

#define POINTER_TYPE 100700
#define POINTER_SIZE 4
class pointertype : public primitivetype {
public:
   pointertype(datatype *dt);
   ~pointertype();
   datatype *dtype();
   //datatype *dtype(datatype *dt);
private:
   datatype *_dtype;
};

#endif
