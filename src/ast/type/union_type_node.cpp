#include "union_type_node.h"

UnionTypeNode::UnionTypeNode(string id, DeclarationNode *declaration)
   : TypeNode(NODE_TYPE_UNION_TYPE) {
   _id = id;
   _decl = declaration;
}

string UnionTypeNode::identifier(){
   return _id;
}

DeclarationNode *UnionTypeNode::declaration(){
   return _decl;
}

