#ifndef RCC_AST_STRUCT_TYPE_NODE_H
#define RCC_AST_STRUCT_TYPE_NODE_H

#include "type_node.h"

#include "../declaration/declaration_node.h"

#include <string>

using std::string;

class StructTypeNode : public TypeNode {
public:
   StructTypeNode(string id, DeclarationNode *declaration);
   string identifier();
   DeclarationNode *declaration();
private:
   string _id;
   DeclarationNode *_decl;
};

#endif
