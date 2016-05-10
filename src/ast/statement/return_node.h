#ifndef RCC_AST_RETURN_NODE_H
#define RCC_AST_RETURN_NODE_H

#include "statement_node.h"

#include "../expression/expression_node.h"

class ReturnNode : public StatementNode {
public:
   ReturnNode(ExpressionNode *expr); 
   ExpressionNode *expression();
private:
   ExpressionNode *_expr;
};

#endif
