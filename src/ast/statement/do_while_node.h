#ifndef RCC_AST_DO_WHILE_NODE_H
#define RCC_AST_DO_WHILE_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class DoWhileNode : public StatementNode {
public:
   DoWhileNode(StatementNode *stmt,ExpressionNode *cond);
   ExpressionNode *condition();
   StatementNode *statement();
private:
   ExpressionNode *_cond;
   StatementNode *_stmt;
};

#endif
