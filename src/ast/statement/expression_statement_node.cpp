#include "expression_statement_node.h"

ExpressionStatementNode::ExpressionStatementNode(ExpressionNode *expr)
   : StatementNode(NODE_TYPE_EXPRESSION_STATEMENT) {
   _expr = expr;
}
ExpressionNode *ExpressionStatementNode::expression(){
   return _expr;
}

