#include "attribute_ref_node.h"

AttributeReferenceNode::AttributeReferenceNode(ExpressionNode *base, string operation, string identifier)
   : ExpressionNode(NODE_TYPE_ATTRIBUTE_REFERENCE) {
   _base = base;
   _operation = operation;
   _id = identifier;
}

ExpressionNode *AttributeReferenceNode::base(){
   return _base;
}

string AttributeReferenceNode::operation(){
   return _operation;
}

string AttributeReferenceNode::identifier(){
   return _id;
}

