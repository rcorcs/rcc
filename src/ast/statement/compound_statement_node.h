#ifndef RCC_AST_COMPOUND_STATEMENT_NODE_H
#define RCC_AST_COMPOUND_STATEMENT_NODE_H

#include "statement_node.h"

class CompoundStatementNode : public StatementNode {
public:
   CompoundStatementNode(StatementNode *statement, CompoundStatementNode *nextStatement);
   StatementNode *statement();
   CompoundStatementNode *nextStatement();
   void nextStatement(CompoundStatementNode *nextStatement);
private:
   StatementNode *_stmt;
   CompoundStatementNode *_nextStmt;
};

#endif
