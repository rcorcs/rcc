#include "function_call_node.h"

FunctionCallNode::FunctionCallNode(ExpressionNode *address, ArgumentListNode *args)
   : ExpressionNode(NODE_TYPE_FUNCTION_CALL) {
   _address = address;
   _args = args;
}

ExpressionNode *FunctionCallNode::address(){
   return _address;
}

ArgumentListNode *FunctionCallNode::arguments(){
   return _args;
}

