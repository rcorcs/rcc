#include "argument_list_node.h"

ArgumentListNode::ArgumentListNode(ExpressionNode *expr, ArgumentListNode *next)
   : ExpressionNode(NODE_TYPE_ARGUMENT_LIST) {
   _expr = expr;
   _next = next;
}

ExpressionNode *ArgumentListNode::expression(){
   return _expr;
}

ArgumentListNode *ArgumentListNode::nextExpression(){
   return _next;
}

void ArgumentListNode::nextExpression(ArgumentListNode *next){
   _next = next;
}
