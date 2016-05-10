#ifndef RCC_AST_GOTO_NODE_H
#define RCC_AST_GOTO_NODE_H

#include "statement_node.h"


#include <string>

using std::string;

class GotoNode : public StatementNode {
public:
   GotoNode(string label); 
   string label();
private:
   string _label;
};

#endif
