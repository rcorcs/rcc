#ifndef RCC_AST_ARRAY_DECLARATION_NODE_H
#define RCC_AST_ARRAY_DECLARATION_NODE_H

#include "declaration_node.h"
#include "../type/type_composition_node.h"

class ArrayDeclarationNode : public DeclarationNode {
public:

   ArrayDeclarationNode(TypeCompositionNode *qualifiers, DeclarationNode *declarator, DeclarationNode *size);
   TypeCompositionNode *qualifiers();
   DeclarationNode *declarator();
   DeclarationNode *size();
private:
   TypeCompositionNode *_qualifiers;
   DeclarationNode *_declarator;
   DeclarationNode *_size;
};

#endif
