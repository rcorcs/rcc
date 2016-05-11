#include "for_node.h"

ForNode::ForNode(StatementNode *init, ExpressionStatementNode *cond, ExpressionNode *step, StatementNode *stmt)
   : StatementNode(NODE_TYPE_FOR) {
   _init = init;
   _cond = cond;
   _step = step;
   _stmt = stmt;
}

StatementNode *ForNode::initialize(){
   return _init;
}

ExpressionStatementNode *ForNode::condition(){
   return _cond;
}

ExpressionNode *ForNode::step(){
   return _step;
}

StatementNode *ForNode::statement(){
   return _stmt;
}

