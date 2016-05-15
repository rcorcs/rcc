#include "cast_node.h"

CastNode::CastNode(TypeNode *type, ExpressionNode *operand)
   : ExpressionNode(NODE_TYPE_CAST) {
   _operand = operand;
   _type = type;
}

ExpressionNode *CastNode::operand(){
   return _operand;
}

TypeNode *CastNode::type(){
   return _type;
}

