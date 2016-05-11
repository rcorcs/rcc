#ifndef RCC_AST_VARIABLE_DECLARATION_NODE_H
#define RCC_AST_VARIABLE_DECLARATION_NODE_H


#include "declaration_node.h"
#include "identifier_declaration_node.h"
#include "../type/type_node.h"
#include <string>

using std::string;

class VariableDeclarationNode : public DeclarationNode {
public:
   VariableDeclarationNode(TypeNode *type, IdentifierDeclarationNode *id);
   TypeNode *type();
   IdentifierDeclarationNode *identifier();
private:
   TypeNode *_type;
   IdentifierDeclarationNode *_id;
};

#endif
