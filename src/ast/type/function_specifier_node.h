#ifndef RCC_AST_FUNCTION_SPECIFIER_NODE_H
#define RCC_AST_FUNCTION_SPECIFIER_NODE_H

#include "type_node.h"

enum FunctionSpecifier
{
   TYPE_INLINE,
   TYPE_NORETURN,
};

class FunctionSpecifierNode : public TypeNode {
public:
   FunctionSpecifierNode(FunctionSpecifier specifier);
   FunctionSpecifier functionSpecifier();
private:
   FunctionSpecifier _specifier;
};


#endif
