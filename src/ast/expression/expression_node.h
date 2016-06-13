#ifndef RCC_AST_EXPRESSION_NODE_H
#define RCC_AST_EXPRESSION_NODE_H

#include "../node.h"

#include <string>

using std::string;

class ExpressionNode : public Node {
public:
   ExpressionNode(NodeType type);
   
   string evaluationType();
   void evaluationType(string evalType);
private:
   string _evalType;
};

#endif
