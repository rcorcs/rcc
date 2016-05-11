#ifndef RCC_AST_PRIMITIVE_TYPE_NODE_H
#define RCC_AST_PRIMITIVE_TYPE_NODE_H

#include "type_node.h"

enum TypeSpecifier
{
   TYPE_VOID,
   TYPE_CHAR,
   TYPE_SHORT,
   TYPE_INT,
   TYPE_LONG,
   TYPE_FLOAT,
   TYPE_DOUBLE,
   TYPE_SIGNED,
   TYPE_UNSIGNED,
   TYPE_BOOL,
   TYPE_COMPLEX,
   TYPE_IMAGINARY,
};

class PrimitiveTypeNode : public TypeNode {
public:
   PrimitiveTypeNode(TypeSpecifier type);
   TypeSpecifier typeSpecifier();
private:
   TypeSpecifier _type;
};


#endif
