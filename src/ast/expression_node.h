#ifndef RCC_AST_EXPRESSION_NODE_H
#define RCC_AST_EXPRESSION_NODE_H

#include "node.h"

class ExpressionNode : public Node {
public:
   ExpressionNode(NodeType type);
};

#endif
