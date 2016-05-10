#ifndef RCC_AST_BINARY_EXPRESSION_NODE_H
#define RCC_AST_BINARY_EXPRESSION_NODE_H

#include "expression_node.h"

#include <string>

using std::string;

class BinaryExpressionNode : public ExpressionNode {
public:
   BinaryExpressionNode(ExpressionNode *leftOperand, string operation, ExpressionNode *rightOperand);
   
   ExpressionNode *leftOperand();
   string operation();
   ExpressionNode *rightOperand();
private:
   ExpressionNode *_leftOperand;
   string _operation;
   ExpressionNode *_rightOperand;
};

#endif
