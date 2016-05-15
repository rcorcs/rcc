#include "storage_specifier_node.h"

StorageSpecifierNode::StorageSpecifierNode(StorageSpecifier specifier)
   : TypeNode(NODE_TYPE_STORAGE_SPECIFIER) {
   _specifier = specifier;
}

StorageSpecifier StorageSpecifierNode::functionSpecifier(){
   return _specifier;
}

