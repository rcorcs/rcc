#ifndef RCC_AST_CONDITIONAL_EXPRESSION_NODE_H
#define RCC_AST_CONDITIONAL_EXPRESSION_NODE_H

#include "expression_node.h"

class ConditionalExpressionNode : public ExpressionNode {
public:
   ConditionalExpressionNode(ExpressionNode *condition, ExpressionNode *thenExpression, ExpressionNode *elseExpression);
   
   ExpressionNode *condition();
   ExpressionNode *thenExpression();
   ExpressionNode *elseExpression();
private:
   ExpressionNode *_condition;
   ExpressionNode *_thenExpression;
   ExpressionNode *_elseExpression;
};

#endif
