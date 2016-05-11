#ifndef RCC_AST_LABELED_STATEMENT_NODE_H
#define RCC_AST_LABELED_STATEMENT_NODE_H

#include "statement_node.h"

#include <string>

using std::string;

class LabeledStatementNode : public StatementNode {
public:
   LabeledStatementNode(string label, StatementNode *statement);
   string label();
   StatementNode *statement();
private:
   string _label;
   StatementNode *_stmt;
};

#endif
