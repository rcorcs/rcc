#ifndef RCC_AST_ASSIGNMENT_NODE_H
#define RCC_AST_ASSIGNMENT_NODE_H

#include "declaration_node.h"

class AssignmentNode : public DeclarationNode {
public:
   AssignmentNode(DeclarationNode *declarator, DeclarationNode *initializer);
   DeclarationNode *declarator();
   DeclarationNode *initializer();
private:
   DeclarationNode *_declarator;
   DeclarationNode *_initializer;
};

#endif
