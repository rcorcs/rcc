#ifndef RCC_AST_PARAMETER_LIST_NODE_H
#define RCC_AST_PARAMETER_LIST_NODE_H

#include "declaration_node.h"

class ParameterListNode : public DeclarationNode {
public:
   ParameterListNode(DeclarationNode *declaration, ParameterListNode *nextParameter);
   DeclarationNode *declaration();
   ParameterListNode *nextParameter();
   void nextParameter(ParameterListNode *nextParameter);
private:
   DeclarationNode *_declaration;
   ParameterListNode *_nextParameter;
};

#endif
