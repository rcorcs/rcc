#ifndef RCC_AST_EXPRESSION_LIST_NODE_H
#define RCC_AST_EXPRESSION_LIST_NODE_H

#include "expression_node.h"


class ExpressionListNode : public ExpressionNode {
public:
   ExpressionListNode(ExpressionNode *expr, ExpressionListNode *next);
   
   ExpressionNode *expr();
   ExpressionListNode *next();
private:
   ExpressionNode *_expr;
   ExpressionListNode *_next;
};

#endif
