#include "expression_declaration_node.h"

ExpressionDeclarationNode::ExpressionDeclarationNode(ExpressionNode *expr)
   : DeclarationNode(NODE_TYPE_EXPRESSION_DECLARATION) {
   _expr = expr;
}
ExpressionNode *ExpressionDeclarationNode::expression(){
   return _expr;
}

