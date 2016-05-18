#include "attribute_declaration_node.h"

AttributeDeclarationNode::AttributeDeclarationNode(DeclarationNode *specifier, DeclarationNode *declarator)
   : DeclarationNode(NODE_TYPE_ATTRIBUTE_DECLARATION) {
   _specifier = specifier;
   _declarator = declarator;
}

DeclarationNode *AttributeDeclarationNode::specifier(){
   return _specifier;
}

DeclarationNode *AttributeDeclarationNode::declarator(){
   return _declarator;
}

