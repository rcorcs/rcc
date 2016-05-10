#include "do_while_node.h"

DoWhileNode::DoWhileNode(StatementNode *stmt,ExpressionNode *cond)
   : StatementNode(NODE_TYPE_DO_WHILE) {
   _cond = cond;
   _stmt = stmt;
}

ExpressionNode *DoWhileNode::condition(){
   return _cond;
}

StatementNode *DoWhileNode::statement(){
   return _stmt;
}

