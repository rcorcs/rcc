#ifndef RCC_AST_DECLARATION_LIST_NODE_H
#define RCC_AST_DECLARATION_LIST_NODE_H

#include "declaration_node.h"

class DeclarationListNode : public DeclarationNode {
public:
   DeclarationListNode(DeclarationNode *declaration, DeclarationListNode *nextDeclaration);
   DeclarationNode *declaration();
   DeclarationListNode *nextDeclaration();
   void nextDeclaration(DeclarationListNode *nextDeclaration);
private:
   DeclarationNode *_declaration;
   DeclarationListNode *_nextDeclaration;
};

#endif
