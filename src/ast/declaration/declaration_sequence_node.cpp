#include "declaration_sequence_node.h"

DeclarationSequenceNode::DeclarationSequenceNode(DeclarationNode *declaration, DeclarationSequenceNode *nextDeclaration)
   : DeclarationNode(NODE_TYPE_DECLARATION_SEQUENCE) {
   _declaration = declaration;
   _nextDeclaration = nextDeclaration;
}

DeclarationNode *DeclarationSequenceNode::declaration(){
   return _declaration;
}

DeclarationSequenceNode *DeclarationSequenceNode::nextDeclaration(){
   return _nextDeclaration;
}

void DeclarationSequenceNode::nextDeclaration(DeclarationSequenceNode *nextDeclaration){
   _nextDeclaration = nextDeclaration;
}
