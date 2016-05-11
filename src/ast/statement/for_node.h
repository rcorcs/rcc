#ifndef RCC_AST_FOR_NODE_H
#define RCC_AST_FOR_NODE_H

#include "statement_node.h"
#include "expression_statement_node.h"

#include "../expression/expression_node.h"

class ForNode : public StatementNode {
public:
   ForNode(StatementNode *init, ExpressionStatementNode *cond, ExpressionNode *step, StatementNode *stmt); 
   StatementNode *initialize();
   ExpressionStatementNode *condition();
   ExpressionNode *step();
   StatementNode *statement();
private:
   StatementNode *_init;
   ExpressionStatementNode *_cond;
   ExpressionNode *_step;
   StatementNode *_stmt;
};

#endif
