#include "for_node.h"

ForNode::ForNode(ExpressionNode *init, ExpressionNode *cond, ExpressionNode *step, StatementNode *stmt)
   : StatementNode(NODE_TYPE_FOR) {
   _init = init;
   _cond = cond;
   _step = step;
   _stmt = stmt;
}

ExpressionNode *ForNode::initialize(){
   return _init;
}

ExpressionNode *ForNode::condition(){
   return _cond;
}

ExpressionNode *ForNode::step(){
   return _step;
}

StatementNode *ForNode::statement(){
   return _stmt;
}

