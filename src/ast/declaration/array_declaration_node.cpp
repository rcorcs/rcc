#include "array_declaration_node.h"

ArrayDeclarationNode::ArrayDeclarationNode(TypeCompositionNode *qualifiers, DeclarationNode *declarator, DeclarationNode *size)
   : DeclarationNode(NODE_TYPE_ARRAY_DECLARATION) {
   _declarator = declarator;
   _qualifiers = qualifiers;
   _size = size;
}

DeclarationNode *ArrayDeclarationNode::declarator(){
   return _declarator;
}

TypeCompositionNode *ArrayDeclarationNode::qualifiers(){
   return _qualifiers;
}
   
DeclarationNode *ArrayDeclarationNode::size(){
   return _size;
}

