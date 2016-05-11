#ifndef RCC_AST_DECLARATION_NODE_H
#define RCC_AST_DECLARATION_NODE_H

#include "../node.h"

class DeclarationNode : public Node {
public:
   DeclarationNode(NodeType type);
};

#endif
