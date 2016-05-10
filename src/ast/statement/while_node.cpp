#include "while_node.h"

WhileNode::WhileNode(ExpressionNode *cond, StatementNode *stmt)
   : StatementNode(NODE_TYPE_WHILE) {
   _cond = cond;
   _stmt = stmt;
}

ExpressionNode *WhileNode::condition(){
   return _cond;
}

StatementNode *WhileNode::statement(){
   return _stmt;
}

