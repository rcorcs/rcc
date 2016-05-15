#ifndef RCC_AST_CAST_NODE_H
#define RCC_AST_CAST_NODE_H

#include "expression_node.h"
#include "../type/type_node.h"

#include<string>
using std::string;

class CastNode : public ExpressionNode {
public:
   CastNode(TypeNode *type, ExpressionNode *operand);

   TypeNode *type();   
   ExpressionNode *operand();
private:
   TypeNode *_type;
   ExpressionNode *_operand;
};

#endif
