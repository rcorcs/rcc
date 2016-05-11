#include "identifier_declaration_node.h"

IdentifierDeclarationNode::IdentifierDeclarationNode(string id)
   : DeclarationNode(NODE_TYPE_IDENTIFIER_DECLARATION) {
   _id = id;
}

string IdentifierDeclarationNode::identifier(){
   return _id;
}
