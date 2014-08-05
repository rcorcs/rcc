#ifndef RCC_DEFTAB_H
#define RCC_DEFTAB_H

#include "def.h"

#include <string>
#include <list>
#include <map>
using std::string;
using std::list;
using std::map;
using std::pair;

class deftab {
public:
   deftab();
   ~deftab();
   
   void insert(def *d);
   bool contains(const char *id);
   def *get(const char *id);
   
   bool remove(const char *id);

private:
   list<def *>  _refl;
   map<string, def *> _defmap;
};

#endif
