#ifndef RCC_AST_PARAMETER_DECLARATION_NODE_H
#define RCC_AST_PARAMETER_DECLARATION_NODE_H


#include "declaration_node.h"
#include "../type/type_node.h"


class ParameterDeclarationNode : public DeclarationNode {
public:
   ParameterDeclarationNode(TypeNode *type, DeclarationNode *declarator);
   TypeNode *type();
   DeclarationNode *declarator();
private:
   TypeNode *_type;
   DeclarationNode *_declarator;
};

#endif
