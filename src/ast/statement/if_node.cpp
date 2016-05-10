#include "if_node.h"

IfNode::IfNode(ExpressionNode *cond, StatementNode *thenStatement, StatementNode *elseStatement)
   : StatementNode(NODE_TYPE_IF) {
   _cond = cond;
   _thenStmt = thenStatement;
   _elseStmt = elseStatement;
}
ExpressionNode *IfNode::condition(){
   return _cond;
}

StatementNode *IfNode::thenStatement(){
   return _thenStmt;
}

StatementNode *IfNode::elseStatement(){
   return _elseStmt;
}

