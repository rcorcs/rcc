#ifndef RCC_AST_SIZEOF_NODE_H
#define RCC_AST_SIZEOF_NODE_H

#include "expression_node.h"
#include "../declaration/declaration_node.h"


class SizeOfNode : public ExpressionNode {
public:
   SizeOfNode(DeclarationNode *typeDeclation);

   DeclarationNode *typeDeclation();
private:
   DeclarationNode *_typeDeclation;
};

#endif
