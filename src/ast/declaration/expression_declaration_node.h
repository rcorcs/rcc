#ifndef RCC_AST_EXPRESSION_DECLARATION_NODE_H
#define RCC_AST_EXPRESSION_DECLARATION_NODE_H

#include "declaration_node.h"

#include "../expression/expression_node.h"

class ExpressionDeclarationNode : public DeclarationNode {
public:
   ExpressionDeclarationNode(ExpressionNode *expr);
   ExpressionNode *expression();
private:
   ExpressionNode *_expr;
};

#endif
