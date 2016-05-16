#include "variable_declaration_node.h"

VariableDeclarationNode::VariableDeclarationNode(DeclarationNode *specifier, DeclarationNode *declarator)
   : DeclarationNode(NODE_TYPE_VARIABLE_DECLARATION) {
   _specifier = specifier;
   _declarator = declarator;
}

DeclarationNode *VariableDeclarationNode::specifier(){
   return _specifier;
}

DeclarationNode *VariableDeclarationNode::declarator(){
   return _declarator;
}

