#include "attribute_initializer_node.h"

AttributeInitializerNode::AttributeInitializerNode(DeclarationNode *declarator, DeclarationNode *initializer)
   : DeclarationNode(NODE_TYPE_ATTRIBUTE_INITIALIZER) {
   _declarator = declarator;
   _initializer = initializer;
}

DeclarationNode *AttributeInitializerNode::declarator(){
   return _declarator;
}

DeclarationNode *AttributeInitializerNode::initializer(){
   return _initializer;
}

