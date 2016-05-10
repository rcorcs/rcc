#ifndef RCC_AST_STATEMENT_NODE_H
#define RCC_AST_STATEMENT_NODE_H

#include "../node.h"

class StatementNode : public Node {
public:
   StatementNode(NodeType type);
};

#endif
