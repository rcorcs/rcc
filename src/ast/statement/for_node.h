#ifndef RCC_AST_FOR_NODE_H
#define RCC_AST_FOR_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class ForNode : public StatementNode {
public:
   ForNode(ExpressionNode *init, ExpressionNode *cond, ExpressionNode *step, StatementNode *stmt); 
   ExpressionNode *initialize();
   ExpressionNode *condition();
   ExpressionNode *step();
   StatementNode *statement();
private:
   ExpressionNode *_init;
   ExpressionNode *_cond;
   ExpressionNode *_step;
   StatementNode *_stmt;
};

#endif
