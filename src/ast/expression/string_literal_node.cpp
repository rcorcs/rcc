
#include "string_literal_node.h"

StringLiteralNode::StringLiteralNode(string literal) : ExpressionNode(NODE_TYPE_STRING_LITERAL) {
   _literal = literal;
}

const string StringLiteralNode::literal() const {
   return _literal;
}

