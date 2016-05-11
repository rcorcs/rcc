#include "case_statement_node.h"

CaseStatementNode::CaseStatementNode(ExpressionNode *cond, StatementNode *statement)
   : StatementNode(NODE_TYPE_CASE_STATEMENT) {
   _cond = cond;
   _stmt = statement;
}

ExpressionNode *CaseStatementNode::condition(){
   return _cond;
}

StatementNode *CaseStatementNode::statement(){
   return _stmt;
}

