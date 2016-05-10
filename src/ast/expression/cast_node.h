#ifndef RCC_AST_CAST_NODE_H
#define RCC_AST_CAST_NODE_H

#include "expression_node.h"

#include<string>
using std::string;

class CastNode : public ExpressionNode {
public:
   CastNode(string type, ExpressionNode *operand);

   string type();   
   ExpressionNode *operand();
private:
   string _type;
   ExpressionNode *_operand;
};

#endif
