#ifndef RCC_AST_ATTRIBUTE_DECLARATION_NODE_H
#define RCC_AST_ATTRIBUTE_DECLARATION_NODE_H


#include "declaration_node.h"

class AttributeDeclarationNode : public DeclarationNode {
public:
   AttributeDeclarationNode(DeclarationNode *specifier, DeclarationNode *declarator);
   DeclarationNode *specifier();
   DeclarationNode *declarator();
private:
   DeclarationNode *_specifier;
   DeclarationNode *_declarator;
};

#endif
