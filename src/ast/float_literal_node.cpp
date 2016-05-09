
#include "float_literal_node.h"

#include <cstdlib>

FloatLiteralNode::FloatLiteralNode(string literal) : ExpressionNode(NODE_TYPE_FLOAT_LITERAL) {
   _literal = literal;
   _value = atof(literal.c_str());
}

const string FloatLiteralNode::literal() const {
   return _literal;
}


const double FloatLiteralNode::value() const {
   return _value;
}
