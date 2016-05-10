#ifndef RCC_AST_FLOAT_LITERAL_NODE_H
#define RCC_AST_FLOAT_LITERAL_NODE_H

#include <string>

using std::string;

#include "expression_node.h"

class FloatLiteralNode : public ExpressionNode {
public:
   FloatLiteralNode(string literal);
   
   const string literal() const;
   const double value() const;
private:
   string _literal;
   double _value;
};

#endif
