#ifndef RCC_AST_CASE_STATEMENT_NODE_H
#define RCC_AST_CASE_STATEMENT_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class CaseStatementNode : public StatementNode {
public:
   CaseStatementNode(ExpressionNode *cond, StatementNode *statement);
   ExpressionNode *condition();
   StatementNode *statement();
private:
   ExpressionNode *_cond;
   StatementNode *_stmt;
};

#endif
