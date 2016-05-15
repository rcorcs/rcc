#ifndef RCC_AST_STORAGE_SPECIFIER_NODE_H
#define RCC_AST_STORAGE_SPECIFIER_NODE_H

#include "type_node.h"

enum StorageSpecifier
{
   TYPE_EXTERN,
	TYPE_STATIC,
	TYPE_THREAD_LOCAL,
	TYPE_AUTO,
	TYPE_REGISTER,
};

class StorageSpecifierNode : public TypeNode {
public:
   StorageSpecifierNode(StorageSpecifier specifier);
   StorageSpecifier functionSpecifier();
private:
   StorageSpecifier _specifier;
};


#endif
