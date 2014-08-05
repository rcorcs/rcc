#ifndef RCC_FUNCINFO_H
#define RCC_FUNCINFO_H

#include "../datatypes.h"
#include "idinfo.h"

#define FUNCINFO 2
class funcinfo : public idinfo {
public:
   funcinfo(const char *id, datatype *dt, unsigned int scopelvl);
   ~funcinfo();
   
   datatype *rettype();
   datatype *rettype(datatype *dt);
private:
   datatype *_rettype;
};


#endif

