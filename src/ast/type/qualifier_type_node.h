#ifndef RCC_AST_QUALIFIER_TYPE_NODE_H
#define RCC_AST_QUALIFIER_TYPE_NODE_H

#include "type_node.h"
#include "../../types/type_qualifier.h"

class QualifierTypeNode : public TypeNode {
public:
   QualifierTypeNode(TypeQualifier qualifier);
   TypeQualifier typeQualifier();
private:
   TypeQualifier _qualifier;
};


#endif
