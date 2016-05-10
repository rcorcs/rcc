#ifndef RCC_AST_FUNCTION_CALL_NODE_H
#define RCC_AST_FUNCTION_CALL_NODE_H

#include "expression_node.h"
#include "argument_list_node.h"


class FunctionCallNode : public ExpressionNode {
public:
   FunctionCallNode(ExpressionNode *address, ArgumentListNode *args);
   
   ExpressionNode *address();
   ArgumentListNode *arguments();
private:
   ExpressionNode *_address;
   ArgumentListNode *_args;
};

#endif
