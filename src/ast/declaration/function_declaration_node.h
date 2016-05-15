#ifndef RCC_AST_FUNCTION_DECLARATION_NODE_H
#define RCC_AST_FUNCTION_DECLARATION_NODE_H


#include "declaration_node.h"
#include "../type/type_node.h"
#include "../statement/statement_node.h"


class FunctionDeclarationNode : public DeclarationNode {
public:
   FunctionDeclarationNode(TypeNode *type, DeclarationNode *declarator, StatementNode *stmt);
   TypeNode *type();
   DeclarationNode *declarator();
   StatementNode *statement();
private:
   TypeNode *_type;
   DeclarationNode *_declarator;
   StatementNode *_stmt;
};

#endif
