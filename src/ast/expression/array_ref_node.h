#ifndef RCC_AST_ARRAY_REFERENCE_NODE_H
#define RCC_AST_ARRAY_REFERENCE_NODE_H

#include "expression_node.h"


class ArrayReferenceNode : public ExpressionNode {
public:
   ArrayReferenceNode(ExpressionNode *base, ExpressionNode *offset);
   
   ExpressionNode *base();
   ExpressionNode *offset();
private:
   ExpressionNode *_base;
   ExpressionNode *_offset;
};

#endif
