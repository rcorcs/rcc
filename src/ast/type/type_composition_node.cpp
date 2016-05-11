#include "type_composition_node.h"

TypeCompositionNode::TypeCompositionNode(TypeNode *type, TypeCompositionNode *nextType)
   : TypeNode(NODE_TYPE_TYPE_COMPOSITION) {
   _type = type;
   _nextType = nextType;
}


TypeNode *TypeCompositionNode::type(){
   return _type;
}

TypeCompositionNode *TypeCompositionNode::nextType(){
   return _nextType;
}

