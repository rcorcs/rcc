
#include "char_literal_node.h"

CharLiteralNode::CharLiteralNode(string literal) : ExpressionNode(NODE_TYPE_CHAR_LITERAL) {
   _literal = literal;
   _value = literal[1];
}

const string CharLiteralNode::literal() const {
   return _literal;
}


const char CharLiteralNode::value() const {
   return _value;
}
