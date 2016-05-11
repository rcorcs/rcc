#include "declaration_list_node.h"

DeclarationListNode::DeclarationListNode(DeclarationNode *declaration, DeclarationListNode *nextDeclaration)
   : DeclarationNode(NODE_TYPE_DECLARATION_LIST) {
   _declaration = declaration;
   _nextDeclaration = nextDeclaration;
}

DeclarationNode *DeclarationListNode::declaration(){
   return _declaration;
}

DeclarationListNode *DeclarationListNode::nextDeclaration(){
   return _nextDeclaration;
}

