#include "function_declarator_node.h"

FunctionDeclaratorNode::FunctionDeclaratorNode(DeclarationNode *declarator, ParameterListNode *params)
   : DeclarationNode(NODE_TYPE_FUNCTION_DECLARATOR) {
   _declarator = declarator;
   _params = params;
}

DeclarationNode *FunctionDeclaratorNode::declarator(){
   return _declarator;
}

ParameterListNode *FunctionDeclaratorNode::parameters(){
   return _params;
}

