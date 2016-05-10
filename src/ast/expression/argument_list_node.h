#ifndef RCC_AST_ARGUMENT_LIST_NODE_H
#define RCC_AST_ARGUMENT_LIST_NODE_H

#include "expression_node.h"


class ArgumentListNode : public ExpressionNode {
public:
   ArgumentListNode(ExpressionNode *expr, ArgumentListNode *next);
   
   ExpressionNode *expr();
   ArgumentListNode *next();
private:
   ExpressionNode *_expr;
   ArgumentListNode *_next;
};

#endif
