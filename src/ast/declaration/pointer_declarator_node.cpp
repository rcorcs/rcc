#include "pointer_declarator_node.h"

PointerDeclaratorNode::PointerDeclaratorNode(TypeCompositionNode *qualifiers, DeclarationNode *decl)
   : DeclarationNode(NODE_TYPE_POINTER_DECLARATOR) {
   _qualifiers = qualifiers;
   _decl = decl;
}

TypeCompositionNode *PointerDeclaratorNode::qualifiers(){
   return _qualifiers;
}
   
DeclarationNode *PointerDeclaratorNode::declaration(){
   return _decl;
}

void PointerDeclaratorNode::declaration(DeclarationNode *decl){
   _decl = decl;
}

