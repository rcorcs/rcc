#include "struct_type_node.h"

StructTypeNode::StructTypeNode(string id, DeclarationNode *declaration)
   : TypeNode(NODE_TYPE_STRUCT_TYPE) {
   _id = id;
   _decl = declaration;
}

string StructTypeNode::identifier(){
   return _id;
}

DeclarationNode *StructTypeNode::declaration(){
   return _decl;
}

