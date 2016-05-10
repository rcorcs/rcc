#include "cast_node.h"

CastNode::CastNode(string type, ExpressionNode *operand)
   : ExpressionNode(NODE_TYPE_CAST) {
   _operand = operand;
   _type = type;
}

ExpressionNode *CastNode::operand(){
   return _operand;
}

string CastNode::type(){
   return _type;
}

