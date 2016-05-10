#ifndef RCC_AST_IF_NODE_H
#define RCC_AST_IF_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class IfNode : public StatementNode {
public:
   IfNode(ExpressionNode *cond, StatementNode *thenStatement, StatementNode *elseStatement);
   ExpressionNode *condition();
   StatementNode *thenStatement();
   StatementNode *elseStatement();
private:
   ExpressionNode *_cond;
   StatementNode *_thenStmt;
   StatementNode *_elseStmt;
};

#endif
