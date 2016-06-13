#include "expression_node.h"

ExpressionNode::ExpressionNode(NodeType type) : Node(type) {}

string ExpressionNode::evaluationType(){
   return _evalType;
}

void ExpressionNode::evaluationType(string evalType){
   _evalType = evalType;
}

