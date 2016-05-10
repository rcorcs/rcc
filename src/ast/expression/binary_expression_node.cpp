#include "binary_expression_node.h"

BinaryExpressionNode::BinaryExpressionNode(ExpressionNode *leftOperand, string operation, ExpressionNode *rightOperand)
   : ExpressionNode(NODE_TYPE_BINARY_EXPRESSION) {
   _leftOperand = leftOperand;
   _operation = operation;
   _rightOperand = rightOperand;
}

ExpressionNode *BinaryExpressionNode::leftOperand(){
   return _leftOperand;
}

string BinaryExpressionNode::operation(){
   return _operation;
}

ExpressionNode *BinaryExpressionNode::rightOperand(){
   return _rightOperand;
}
