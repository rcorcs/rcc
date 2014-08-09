#ifndef RCC_IDINFO_H
#define RCC_IDINFO_H

#include <cstdlib>
#include <cstdio>
#include <cstring>

class idinfo {
public:
   idinfo(unsigned int type, const char *id, unsigned int scopelvl);
   ~idinfo();

   unsigned int type();
   unsigned int scopelvl();
   const char *id();
   
protected:
   unsigned int _scopelvl;
   unsigned int _type;
   char *_id;
};

#endif
