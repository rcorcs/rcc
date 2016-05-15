#include "parameter_list_node.h"

ParameterListNode::ParameterListNode(DeclarationNode *declaration, ParameterListNode *nextParameter)
   : DeclarationNode(NODE_TYPE_PARAMETER_LIST) {
   _declaration = declaration;
   _nextParameter = nextParameter;
}

DeclarationNode *ParameterListNode::declaration(){
   return _declaration;
}

ParameterListNode *ParameterListNode::nextParameter(){
   return _nextParameter;
}

void ParameterListNode::nextParameter(ParameterListNode *nextParameter){
   _nextParameter = nextParameter;
}

