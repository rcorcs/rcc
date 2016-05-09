#ifndef RCC_AST_PRE_UNARY_EXPRESSION_NODE_H
#define RCC_AST_PRE_UNARY_EXPRESSION_NODE_H

#include "expression_node.h"

#include <string>

using std::string;

class PreUnaryExpressionNode : public ExpressionNode {
public:
   PreUnaryExpressionNode(string operation, ExpressionNode *operand);

   string operation();   
   ExpressionNode *operand();
private:
   ExpressionNode *_operand;
   string _operation;
};

#endif
