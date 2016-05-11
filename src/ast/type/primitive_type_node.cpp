#include "primitive_type_node.h"

PrimitiveTypeNode::PrimitiveTypeNode(TypeSpecifier type)
   : TypeNode(NODE_TYPE_PRIMITIVE_TYPE) {
   _type = type;
}

TypeSpecifier PrimitiveTypeNode::typeSpecifier(){
   return _type;
}

