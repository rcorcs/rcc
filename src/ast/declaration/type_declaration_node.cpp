#include "type_declaration_node.h"

TypeDeclarationNode::TypeDeclarationNode(DeclarationNode *specifier, DeclarationNode *declarator)
   : DeclarationNode(NODE_TYPE_TYPE_DECLARATION) {
   _specifier = specifier;
   _declarator = declarator;
}

DeclarationNode *TypeDeclarationNode::specifier(){
   return _specifier;
}

DeclarationNode *TypeDeclarationNode::declarator(){
   return _declarator;
}

