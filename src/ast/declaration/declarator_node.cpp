#include "declarator_node.h"

DeclaratorNode::DeclaratorNode(DeclarationNode *decl)
   : DeclarationNode(NODE_TYPE_DECLARATOR) {
   _decl = decl;
}

DeclarationNode *DeclaratorNode::declaration(){
   return _decl;
}

