
#include "identifier_node.h"

IdentifierNode::IdentifierNode(string id) : ExpressionNode(NODE_TYPE_IDENTIFIER) {
   _id = id;
}

const string IdentifierNode::id() const {
   return _id;
}

