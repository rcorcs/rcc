#ifndef RCC_AST_PRIMITIVE_TYPE_NODE_H
#define RCC_AST_PRIMITIVE_TYPE_NODE_H

#include "type_node.h"
#include "../../types/type_specifier.h"

class PrimitiveTypeNode : public TypeNode {
public:
   PrimitiveTypeNode(TypeSpecifier type);
   TypeSpecifier typeSpecifier();
private:
   TypeSpecifier _type;
};


#endif
