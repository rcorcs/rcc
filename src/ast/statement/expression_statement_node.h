#ifndef RCC_AST_EXPRESSION_STATEMENT_NODE_H
#define RCC_AST_EXPRESSION_STATEMENT_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class ExpressionStatementNode : public StatementNode {
public:
   ExpressionStatementNode(ExpressionNode *expr);
   ExpressionNode *expression();
private:
   ExpressionNode *_expr;
};

#endif
