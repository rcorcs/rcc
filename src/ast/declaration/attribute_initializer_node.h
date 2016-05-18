#ifndef RCC_AST_ATTRIBUTE_INITIALIZER_NODE_H
#define RCC_AST_ATTRIBUTE_INITIALIZER_NODE_H

#include "declaration_node.h"

class AttributeInitializerNode : public DeclarationNode {
public:
   AttributeInitializerNode(DeclarationNode *declarator, DeclarationNode *initializer);
   DeclarationNode *declarator();
   DeclarationNode *initializer();
private:
   DeclarationNode *_declarator;
   DeclarationNode *_initializer;
};

#endif
