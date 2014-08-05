#include "def.h"

def::def(int type, const char *id)
  : _val(0)
{
   _type = type;
   if(id){
      _id = new char[strlen(id)+1];
      strcpy(_id,id);
   }else _id = NULL;
}

def::def(int type, const char *id, const char *val)
{
   _type = type;
   if(id){
      _id = new char[strlen(id)+1];
      strcpy(_id,id);
   }else _id = NULL;
   this->val(val);
}

def::~def()
{
   delete []_id;
   delete []_val;
}

int def::type()
{
   return _type;
}

const char *def::id()
{
   return _id;
}

const char *def::val(const char *v)
{
   if(v){
      _val = new char[strlen(v)+1];
      strcpy(_val,v);
   }else _val = NULL;
   return _val;
}

const char *def::val()
{
   return _val;
}
