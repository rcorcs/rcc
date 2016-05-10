#include "argument_list_node.h"

ArgumentListNode::ArgumentListNode(ExpressionNode *expr, ArgumentListNode *next)
   : ExpressionNode(NODE_TYPE_ARGUMENT_LIST) {
   _expr = expr;
   _next = next;
}

ExpressionNode *ArgumentListNode::expr(){
   return _expr;
}

ArgumentListNode *ArgumentListNode::next(){
   return _next;
}

