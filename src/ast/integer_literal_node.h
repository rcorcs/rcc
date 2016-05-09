#ifndef RCC_AST_INTEGER_LITERAL_NODE_H
#define RCC_AST_INTEGER_LITERAL_NODE_H

#include <string>

using std::string;

#include "expression_node.h"

class IntegerLiteralNode : public ExpressionNode {
public:
   IntegerLiteralNode(string literal);
   
   const string literal() const;
   const long value() const;
private:
   string _literal;
   long _value;
};

#endif
