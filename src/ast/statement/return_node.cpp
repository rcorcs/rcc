#include "return_node.h"

ReturnNode::ReturnNode(ExpressionNode *expr) : StatementNode(NODE_TYPE_RETURN) {
   _expr = expr;
}

ExpressionNode *ReturnNode::expression(){
   return _expr;
}
