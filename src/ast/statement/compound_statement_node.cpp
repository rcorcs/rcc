#include "compound_statement_node.h"

CompoundStatementNode::CompoundStatementNode(StatementNode *statement, CompoundStatementNode *nextStatement)
   : StatementNode(NODE_TYPE_COMPOUND_STATEMENT) {
   _stmt = statement;
   _nextStmt = nextStatement;
}

StatementNode *CompoundStatementNode::statement(){
   return _stmt;
}

CompoundStatementNode *CompoundStatementNode::nextStatement(){
   return _nextStmt;
}

void CompoundStatementNode::nextStatement(CompoundStatementNode *nextStatement){
   _nextStmt = nextStatement;
}

