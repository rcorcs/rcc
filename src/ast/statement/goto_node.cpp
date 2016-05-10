#include "goto_node.h"

GotoNode::GotoNode(string label) : StatementNode(NODE_TYPE_GOTO) {
   _label = label;
}

string GotoNode::label(){
   return _label;
}
