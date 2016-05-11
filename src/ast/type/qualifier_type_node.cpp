#include "qualifier_type_node.h"

QualifierTypeNode::QualifierTypeNode(TypeQualifier qualifier)
   : TypeNode(NODE_TYPE_QUALIFIER_TYPE) {
   _qualifier = qualifier;
}

TypeQualifier QualifierTypeNode::typeQualifier(){
   return _qualifier;
}

