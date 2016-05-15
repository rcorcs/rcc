#ifndef RCC_AST_POINTER_DECLARATOR_NODE_H
#define RCC_AST_POINTER_DECLARATOR_NODE_H

#include "declaration_node.h"
#include "../type/type_composition_node.h"

class PointerDeclaratorNode : public DeclarationNode {
public:
   PointerDeclaratorNode(TypeCompositionNode *qualifiers, DeclarationNode *decl);
   TypeCompositionNode *qualifiers();
   DeclarationNode *declaration();
   void declaration(DeclarationNode *decl);
private:
   TypeCompositionNode *_qualifiers;
   DeclarationNode *_decl;
};

#endif
