#ifndef RCC_AST_CHAR_LITERAL_NODE_H
#define RCC_AST_CHAR_LITERAL_NODE_H

#include <string>

using std::string;

#include "expression_node.h"

class CharLiteralNode : public ExpressionNode {
public:
   CharLiteralNode(string literal);
   
   const string literal() const;
   const char value() const;
private:
   string _literal;
   char _value;
};

#endif
