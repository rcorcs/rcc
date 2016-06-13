#include "qualified_type.h"

QualifiedType::QualifiedType(TypeQualifier qualifier) : DataType(DATA_TYPE_QUALIFIED) {
   _qualifier = qualifier;
}

TypeQualifier QualifiedType::qualifier(){
   return _qualifier;
}

