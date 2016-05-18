#ifndef RCC_AST_CAST_NODE_H
#define RCC_AST_CAST_NODE_H

#include "expression_node.h"
#include "../declaration/declaration_node.h"

class CastNode : public ExpressionNode {
public:
   CastNode(DeclarationNode *typeDeclation, ExpressionNode *operand);

   DeclarationNode *typeDeclation();
   ExpressionNode *operand();
private:
   DeclarationNode *_typeDeclation;
   ExpressionNode *_operand;
};

#endif
