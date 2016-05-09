#include "post_unary_expression_node.h"

PostUnaryExpressionNode::PostUnaryExpressionNode(ExpressionNode *operand, string operation)
   : ExpressionNode(NODE_TYPE_POST_UNARY_EXPRESSION) {
   _operand = operand;
   _operation = operation;
}

ExpressionNode *PostUnaryExpressionNode::operand(){
   return _operand;
}

string PostUnaryExpressionNode::operation(){
   return _operation;
}

