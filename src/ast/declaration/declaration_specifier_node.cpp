#include "declaration_specifier_node.h"

DeclarationSpecifierNode::DeclarationSpecifierNode(TypeNode *type)
   : DeclarationNode(NODE_TYPE_DECLARATION_SPECIFIER) {
   _type = type;
}

TypeNode *DeclarationSpecifierNode::typeSpecifier(){
   return _type;
}

