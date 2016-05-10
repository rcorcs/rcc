
#include "integer_literal_node.h"

#include <cstdlib>

IntegerLiteralNode::IntegerLiteralNode(string literal) : ExpressionNode(NODE_TYPE_INTEGER_LITERAL) {
   _literal = literal;
   _value = atol(literal.c_str());
}

const string IntegerLiteralNode::literal() const {
   return _literal;
}


const long IntegerLiteralNode::value() const {
   return _value;
}
