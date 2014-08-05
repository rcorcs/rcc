#include "deftab.h"

deftab::deftab()
{
}

deftab::~deftab()
{
   for(list<def*>::iterator it = _refl.begin(); it!=_refl.end(); it++)
      delete (*it);
}
   
void deftab::insert(def *d)
{
   string key  = d->id();
   if( ( _defmap.insert( pair<string, def *>(key, d) ) ).second ){
      _refl.push_back(d);
   }
}

bool deftab::contains(const char *id)
{
   string key = id;
   return ( _defmap.find(key)!=_defmap.end() );
}

def *deftab::get(const char *id)
{
   string key = id;
   map<string, def *>::iterator it = _defmap.find(key);
   if(it==_defmap.end()) return NULL;
   else return (*it).second;
}
   
bool deftab::remove(const char *id)
{
   string key = id;
   _defmap.erase( _defmap.find(key) );
}
