#include "primitive_type.h"

PrimitiveType::PrimitiveType(TypeSpecifier specifier) : DataType(DATA_TYPE_PRIMITIVE) {
   _specifier = specifier;
}

TypeSpecifier PrimitiveType::typeSpecifier(){
   return _specifier;
}

