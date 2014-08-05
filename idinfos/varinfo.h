#ifndef RCC_VARINFO_H
#define RCC_VARINFO_H

#include "../datatypes.h"
#include "idinfo.h"


#define VARINFO 1
class varinfo : public idinfo {
public:
   varinfo(const char *id, datatype *dt, unsigned int scopelvl);
   ~varinfo();
   
   datatype *dtype();
   datatype *dtype(datatype *dt);
private:
   datatype *_dtype;
};


#endif
