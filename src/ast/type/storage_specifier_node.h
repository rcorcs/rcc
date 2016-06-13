#ifndef RCC_AST_STORAGE_SPECIFIER_NODE_H
#define RCC_AST_STORAGE_SPECIFIER_NODE_H

#include "type_node.h"
#include "../../types/storage_specifier.h"

class StorageSpecifierNode : public TypeNode {
public:
   StorageSpecifierNode(StorageSpecifier specifier);
   StorageSpecifier storageSpecifier();
private:
   StorageSpecifier _specifier;
};


#endif
