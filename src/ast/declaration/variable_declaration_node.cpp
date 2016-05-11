#include "variable_declaration_node.h"

VariableDeclarationNode::VariableDeclarationNode(TypeNode *type, IdentifierDeclarationNode *id)
   : DeclarationNode(NODE_TYPE_VARIABLE_DECLARATION) {
   _type = type;
   _id = id;
}

TypeNode *VariableDeclarationNode::type(){
   return _type;
}

IdentifierDeclarationNode *VariableDeclarationNode::identifier(){
   return _id;
}

