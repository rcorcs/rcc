#ifndef RCC_AST_ATTRIBUTE_REFERENCE_NODE_H
#define RCC_AST_ATTRIBUTE_REFERENCE_NODE_H

#include "expression_node.h"

#include <string>

using std::string;

class AttributeReferenceNode : public ExpressionNode {
public:
   AttributeReferenceNode(ExpressionNode *base, string operation, string identifier);
   
   ExpressionNode *base();
   string operation();
   string identifier();
private:
   ExpressionNode *_base;
   string _operation;
   string _id;
};

#endif
