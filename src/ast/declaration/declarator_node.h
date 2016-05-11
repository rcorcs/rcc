#ifndef RCC_AST_DECLARATOR_NODE_H
#define RCC_AST_DECLARATOR_NODE_H

#include "declaration_node.h"

class DeclaratorNode : public DeclarationNode {
public:
   DeclaratorNode(DeclarationNode *decl);
   DeclarationNode *declaration();
private:
   DeclarationNode *_decl;
};

#endif
