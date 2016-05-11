#include "function_specifier_node.h"

FunctionSpecifierNode::FunctionSpecifierNode(FunctionSpecifier specifier)
   : TypeNode(NODE_TYPE_FUNCTION_SPECIFIER) {
   _specifier = specifier;
}

FunctionSpecifier FunctionSpecifierNode::functionSpecifier(){
   return _specifier;
}

