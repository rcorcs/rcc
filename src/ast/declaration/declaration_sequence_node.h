#ifndef RCC_AST_DECLARATION_SEQUENCE_NODE_H
#define RCC_AST_DECLARATION_SEQUENCE_NODE_H

#include "declaration_node.h"

class DeclarationSequenceNode : public DeclarationNode {
public:
   DeclarationSequenceNode(DeclarationNode *declaration, DeclarationSequenceNode *nextDeclaration);
   DeclarationNode *declaration();
   DeclarationSequenceNode *nextDeclaration();
   void nextDeclaration(DeclarationSequenceNode *nextDeclaration);
private:
   DeclarationNode *_declaration;
   DeclarationSequenceNode *_nextDeclaration;
};

#endif
