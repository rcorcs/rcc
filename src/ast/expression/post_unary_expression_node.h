#ifndef RCC_AST_POST_UNARY_EXPRESSION_NODE_H
#define RCC_AST_POST_UNARY_EXPRESSION_NODE_H

#include "expression_node.h"

#include <string>

using std::string;

class PostUnaryExpressionNode : public ExpressionNode {
public:
   PostUnaryExpressionNode(ExpressionNode *operand, string operation);

   string operation();   
   ExpressionNode *operand();
private:
   ExpressionNode *_operand;
   string _operation;
};

#endif
