#include "node.h"

Node::Node(NodeType type){
   _type = type;
}

NodeType Node::type(){
   return _type;
}

