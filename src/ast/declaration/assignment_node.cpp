#include "assignment_node.h"

AssignmentNode::AssignmentNode(DeclarationNode *declarator, DeclarationNode *initializer) : DeclarationNode(NODE_TYPE_ASSIGNMENT) {
   _declarator = declarator;
   _initializer = initializer;
}

DeclarationNode *AssignmentNode::declarator(){
   return _declarator;
}

DeclarationNode *AssignmentNode::initializer(){
   return _initializer;
}

