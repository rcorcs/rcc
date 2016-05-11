#ifndef RCC_AST_DECLARATION_STATEMENT_NODE_H
#define RCC_AST_DECLARATION_STATEMENT_NODE_H

#include "statement_node.h"

#include "../declaration/declaration_node.h"

class DeclarationStatementNode : public StatementNode {
public:
   DeclarationStatementNode(DeclarationNode *decl);
   DeclarationNode *declaration();
private:
   DeclarationNode *_decl;
};

#endif
