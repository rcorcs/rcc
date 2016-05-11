#include "attribute_declaration_node.h"

AttributeDeclarationNode::AttributeDeclarationNode(TypeNode *type, DeclaratorNode *declarator, ExpressionNode *init)
   : DeclarationNode(NODE_TYPE_ATTRIBUTE_DECLARATION) {
   _type = type;
   _declarator = declarator;
   _init = init;
}

TypeNode *AttributeDeclarationNode::type(){
   return _type;
}

void AttributeDeclarationNode::type(TypeNode *t){
   _type = t;
}

DeclaratorNode *AttributeDeclarationNode::declarator(){
   return _declarator;
}

ExpressionNode *AttributeDeclarationNode::initializer(){
   return _init;
}

