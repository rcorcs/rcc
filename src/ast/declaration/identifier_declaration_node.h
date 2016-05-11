#ifndef RCC_AST_IDENTIFIER_DECLARATION_NODE_H
#define RCC_AST_IDENTIFIER_DECLARATION_NODE_H

#include "declaration_node.h"

#include <string>

using std::string;

class IdentifierDeclarationNode : public DeclarationNode {
public:
   IdentifierDeclarationNode(string id);
   string identifier();
private:
   string _id;
};

#endif
