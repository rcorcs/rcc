#ifndef RCC_AST_TYPE_COMPOSITION_NODE_H
#define RCC_AST_TYPE_COMPOSITION_NODE_H

#include "type_node.h"

class TypeCompositionNode : public TypeNode {
public:
   TypeCompositionNode(TypeNode *type, TypeCompositionNode *nextType);
   TypeNode *type();
   TypeCompositionNode *nextType();
private:
   TypeNode *_type;
   TypeCompositionNode *_nextType;
};

#endif
