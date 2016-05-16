#ifndef RCC_AST_VARIABLE_DECLARATION_NODE_H
#define RCC_AST_VARIABLE_DECLARATION_NODE_H


#include "declaration_node.h"

class VariableDeclarationNode : public DeclarationNode {
public:
   VariableDeclarationNode(DeclarationNode *specifier, DeclarationNode *declarator);
   DeclarationNode *specifier();
   DeclarationNode *declarator();
private:
   DeclarationNode *_specifier;
   DeclarationNode *_declarator;
};

#endif
