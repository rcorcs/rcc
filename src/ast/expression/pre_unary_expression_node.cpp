#include "pre_unary_expression_node.h"

PreUnaryExpressionNode::PreUnaryExpressionNode(string operation, ExpressionNode *operand)
   : ExpressionNode(NODE_TYPE_PRE_UNARY_EXPRESSION) {
   _operand = operand;
   _operation = operation;
}

ExpressionNode *PreUnaryExpressionNode::operand(){
   return _operand;
}

string PreUnaryExpressionNode::operation(){
   return _operation;
}

