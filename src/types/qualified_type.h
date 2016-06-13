#ifndef RCC_QUALIFIED_TYPE_H
#define RCC_QUALIFIED_TYPE_H

#include "data_type.h"
#include "type_qualifier.h"

class QualifiedType : public DataType {
public:
   QualifiedType(TypeQualifier qualifier);

   TypeQualifier qualifier();
protected:
   TypeQualifier _qualifier;
};

#endif
