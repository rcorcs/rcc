#ifndef RCC_AST_SWITCH_NODE_H
#define RCC_AST_SWITCH_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class SwitchNode : public StatementNode {
public:
   SwitchNode(ExpressionNode *cond, StatementNode *stmt);
   ExpressionNode *condition();
   StatementNode *statement();
private:
   ExpressionNode *_cond;
   StatementNode *_stmt;
};

#endif
