#include "expression_list_node.h"

ExpressionListNode::ExpressionListNode(ExpressionNode *expr, ExpressionListNode *next)
   : ExpressionNode(NODE_TYPE_EXPRESSION_LIST) {
   _expr = expr;
   _next = next;
}

ExpressionNode *ExpressionListNode::expr(){
   return _expr;
}

ExpressionListNode *ExpressionListNode::next(){
   return _next;
}

