#include "switch_node.h"

SwitchNode::SwitchNode(ExpressionNode *cond, StatementNode *stmt)
   : StatementNode(NODE_TYPE_SWITCH) {
   _cond = cond;
   _stmt = stmt;
}
ExpressionNode *SwitchNode::condition(){
   return _cond;
}

StatementNode *SwitchNode::statement(){
   return _stmt;
}

