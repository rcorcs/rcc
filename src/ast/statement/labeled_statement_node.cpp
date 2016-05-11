#include "labeled_statement_node.h"

LabeledStatementNode::LabeledStatementNode(string label, StatementNode *statement)
   : StatementNode(NODE_TYPE_LABELED_STATEMENT) {
   _label = label;
   _stmt = statement;
}

string LabeledStatementNode::label(){
   return _label;
}   

StatementNode *LabeledStatementNode::statement(){
   return _stmt;
}

