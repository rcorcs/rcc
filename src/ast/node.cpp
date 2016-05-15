#include "node.h"

Node::Node(NodeType type){
   _type = type;
}

NodeType Node::nodeType(){
   return _type;
}

