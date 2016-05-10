#include "conditional_expression_node.h"

ConditionalExpressionNode::ConditionalExpressionNode(ExpressionNode *condition, ExpressionNode *thenExpression, ExpressionNode *elseExpression)
   : ExpressionNode(NODE_TYPE_CONDITIONAL_EXPRESSION) {
   _condition = condition;
   _thenExpression = thenExpression;
   _elseExpression = elseExpression;
}

ExpressionNode *ConditionalExpressionNode::condition(){
   return _condition;
}

ExpressionNode *ConditionalExpressionNode::thenExpression(){
   return _thenExpression;
}

ExpressionNode *ConditionalExpressionNode::elseExpression(){
   return _elseExpression;
}

