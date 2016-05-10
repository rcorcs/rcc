#ifndef RCC_AST_STRING_LITERAL_NODE_H
#define RCC_AST_STRING_LITERAL_NODE_H

#include <string>

using std::string;

#include "expression_node.h"

class StringLiteralNode : public ExpressionNode {
public:
   StringLiteralNode(string literal);
   
   const string literal() const;
private:
   string _literal;
};

#endif
