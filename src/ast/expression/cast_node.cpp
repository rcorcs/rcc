#include "cast_node.h"

CastNode::CastNode(DeclarationNode *typeDeclation, ExpressionNode *operand)
   : ExpressionNode(NODE_TYPE_CAST) {
   _operand = operand;
   _typeDeclation = typeDeclation;
}

ExpressionNode *CastNode::operand(){
   return _operand;
}

DeclarationNode *CastNode::typeDeclation(){
   return _typeDeclation;
}

