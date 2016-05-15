#include "parameter_declaration_node.h"

ParameterDeclarationNode::ParameterDeclarationNode(TypeNode *type, DeclarationNode *declarator)
   : DeclarationNode(NODE_TYPE_PARAMETER_DECLARATION) {
   _type = type;
   _declarator = declarator;
}

TypeNode *ParameterDeclarationNode::type(){
   return _type;
}

DeclarationNode *ParameterDeclarationNode::declarator(){
   return _declarator;
}

