#include "array_ref_node.h"

ArrayReferenceNode::ArrayReferenceNode(ExpressionNode *base, ExpressionNode *offset)
   : ExpressionNode(NODE_TYPE_ARRAY_REFERENCE) {
   _base = base;
   _offset = offset;
}

ExpressionNode *ArrayReferenceNode::base(){
   return _base;
}

ExpressionNode *ArrayReferenceNode::offset(){
   return _offset;
}

