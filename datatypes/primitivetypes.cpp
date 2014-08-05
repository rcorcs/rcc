#include "primitivetypes.h"

primitivetype::primitivetype()
  : _modifier(NO_MODIFIER)
{
}

primitivetype::~primitivetype()
{
}

int primitivetype::modifier()
{
   return _modifier;
}

const char *primitivetype::name()
{
   return _name.c_str();
}

size_t primitivetype::size()
{
   return _size;
}

/*
void primitivetype::modifer_name(int mod)
{
   int mdf = mod/10;
   if(mdf==1){
      _name = "unsigned ";
   }else if(mdf==2){
      _name = "signed ";
   }else{
      _name = "";
   }

   mdf = mod%10;
   if(mdf==SHORT_MODIFIER) {
      _name += "short ";
   }else if(mdf==LONG_MODIFIER){
      _name += "long ";
   }else if(mdf==LONG_LONG_MODIFIER){
      _name += "long long ";
   }
}
*/
voidtype::voidtype()
{
   _type = VOID_TYPE;
   _name = "void";
   _size = 0;
}

voidtype::~voidtype()
{
}

booltype::booltype()
{
   _type = BOOL_TYPE;
   _name = "bool";
   _size = BOOL_SIZE;
}

booltype::~booltype()
{
}

bytetype::bytetype()
{
   _type = BYTE_TYPE;
   _name = "byte";
   _size = BYTE_SIZE;
}

bytetype::~bytetype()
{
}

chartype::chartype(int mod)
{
   _type = CHAR_TYPE;
   _modifier = mod;

   _size = CHAR_SIZE;

   //primitivetype::modifier_name(mod);
   int mdf = mod/10;
   if(mdf==1){
      _name = "unsigned ";
   }else if(mdf==2){
      _name = "signed ";
   }else{
      _name = "";
   }

   mdf = mod%10;
   if(mdf==SHORT_MODIFIER) {
      _name += "short ";
   }else if(mdf==LONG_MODIFIER){
      _name += "long ";
   }else if(mdf==LONG_LONG_MODIFIER){
      _name += "long long ";
   }
   _name += "char";

}

chartype::~chartype()
{
}

inttype::inttype(int mod)
{
   _type = INT_TYPE;

   _modifier = mod;
   _size = INT_SIZE;
   
   //primitivetype::modifier_name(mod);
   int mdf = mod/10;
   if(mdf==1){
      _name = "unsigned ";
   }else if(mdf==2){
      _name = "signed ";
   }else{
      _name = "";
   }

   mdf = mod%10;
   if(mdf==SHORT_MODIFIER) {
      _name += "short ";
   }else if(mdf==LONG_MODIFIER){
      _name += "long ";
   }else if(mdf==LONG_LONG_MODIFIER){
      _name += "long long ";
   }
   mod = mod%10;
   if(mod==SHORT_MODIFIER) _size = SHORT_SIZE;
   else if(mod==LONG_MODIFIER) _size = LONG_SIZE;
   else if(mod==LONG_LONG_MODIFIER) _size = LONG_LONG_SIZE;

   _name += "int";
}

inttype::~inttype()
{
}

floattype::floattype()
{
   _type = FLOAT_TYPE;
   _name = "float";
   _size = FLOAT_SIZE;
}

floattype::~floattype()
{
}

doubletype::doubletype(int mod)
{
   _type = DOUBLE_TYPE;
   _modifier = mod;
   _size = DOUBLE_SIZE;

   //primitivetype::modifier_name(mod);
   int mdf = mod/10;
   if(mdf==1){
      _name = "unsigned ";
   }else if(mdf==2){
      _name = "signed ";
   }else{
      _name = "";
   }

   mdf = mod%10;
   if(mdf==SHORT_MODIFIER) {
      _name += "short ";
   }else if(mdf==LONG_MODIFIER){
      _name += "long ";
   }else if(mdf==LONG_LONG_MODIFIER){
      _name += "long long ";
   }

   mod = mod%10;
   if(mod==LONG_MODIFIER) _size = LDOUBLE_SIZE;

   _name += "double";
}

doubletype::~doubletype()
{
}

pointertype::pointertype(datatype *dt)
{
   _type = POINTER_TYPE;
   _dtype = dt;
   _name = _dtype->name();
   _name += "*";
   _size = POINTER_SIZE;
}

pointertype::~pointertype()
{
   delete _dtype; 
}

datatype *pointertype::dtype()
{
   return _dtype;
}

