#ifndef RCC_AST_TYPE_DECLARATION_NODE_H
#define RCC_AST_TYPE_DECLARATION_NODE_H


#include "declaration_node.h"

class TypeDeclarationNode : public DeclarationNode {
public:
   TypeDeclarationNode(DeclarationNode *specifier, DeclarationNode *declarator);
   DeclarationNode *specifier();
   DeclarationNode *declarator();
private:
   DeclarationNode *_specifier;
   DeclarationNode *_declarator;
};

#endif
