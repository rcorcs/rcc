#ifndef RCC_AST_FUNCTION_DECLARATOR_NODE_H
#define RCC_AST_FUNCTION_DECLARATOR_NODE_H


#include "declaration_node.h"
#include "parameter_list_node.h"
#include "../type/type_node.h"
#include "../statement/statement_node.h"


class FunctionDeclaratorNode : public DeclarationNode {
public:
   FunctionDeclaratorNode(DeclarationNode *declarator, ParameterListNode *params);
   DeclarationNode *declarator();
   ParameterListNode *parameters();
private:
   DeclarationNode *_declarator;
   ParameterListNode *_params;
};

#endif
