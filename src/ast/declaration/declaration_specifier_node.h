#ifndef RCC_AST_DECLARATION_SPECIFIER_NODE_H
#define RCC_AST_DECLARATION_SPECIFIER_NODE_H

#include "declaration_node.h"
#include "../type/type_node.h"

class DeclarationSpecifierNode : public DeclarationNode {
public:
   DeclarationSpecifierNode(TypeNode *type);
   TypeNode *typeSpecifier();
private:
   TypeNode *_type;
};

#endif
