#ifndef RCC_PRIMITIVE_TYPE_H
#define RCC_PRIMITIVE_TYPE_H

#include "data_type.h"
#include "type_specifier.h"

class PrimitiveType : public DataType {
public:
   PrimitiveType(TypeSpecifier specifier);

   TypeSpecifier typeSpecifier();
protected:
   TypeSpecifier _specifier;
};

#endif
