#ifndef RCC_AST_QUALIFIER_TYPE_NODE_H
#define RCC_AST_QUALIFIER_TYPE_NODE_H

#include "type_node.h"

enum TypeQualifier
{
   TYPE_CONST,
   TYPE_RESTRICT,
   TYPE_VOLATILE,
   TYPE_ATOMIC,
};

class QualifierTypeNode : public TypeNode {
public:
   QualifierTypeNode(TypeQualifier qualifier);
   TypeQualifier typeQualifier();
private:
   TypeQualifier _qualifier;
};


#endif
