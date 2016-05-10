#ifndef RCC_AST_WHILE_NODE_H
#define RCC_AST_WHILE_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class WhileNode : public StatementNode {
public:
   WhileNode(ExpressionNode *cond, StatementNode *stmt);
   ExpressionNode *condition();
   StatementNode *statement();
private:
   ExpressionNode *_cond;
   StatementNode *_stmt;
};

#endif
