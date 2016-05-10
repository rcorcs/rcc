#ifndef RCC_AST_IDENTIFIER_NODE_H
#define RCC_AST_IDENTIFIER_NODE_H

#include <string>

using std::string;

#include "expression_node.h"

class IdentifierNode : public ExpressionNode {
public:
   IdentifierNode(string id);
   
   const string id() const;
private:
   string _id;
};

#endif
