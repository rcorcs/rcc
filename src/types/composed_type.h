#ifndef RCC_COMPOSED_TYPE_H
#define RCC_COMPOSED_TYPE_H

#include "data_type.h"

class ComposedType: public DataType {
public:
   ComposedType(DataType *type, ComposedType *composition);

   DataType *type();
   void type(DataType *t);
   ComposedType *composition();
   void composition(ComposedType *);
private:
   DataType *_type;
   ComposedType *_composition;
};

#endif
