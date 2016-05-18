#include "sizeof_node.h"

SizeOfNode::SizeOfNode(DeclarationNode *typeDeclation)
   : ExpressionNode(NODE_TYPE_SIZEOF) {
   _typeDeclation = typeDeclation;
}

DeclarationNode *SizeOfNode::typeDeclation(){
   return _typeDeclation;
}

