#ifndef RCC_AST_UNION_TYPE_NODE_H
#define RCC_AST_UNION_TYPE_NODE_H

#include "type_node.h"

#include "../declaration/declaration_node.h"

#include <string>

using std::string;

class UnionTypeNode : public TypeNode {
public:
   UnionTypeNode(string id, DeclarationNode *declaration);
   string identifier();
   DeclarationNode *declaration();
private:
   string _id;
   DeclarationNode *_decl;
};

#endif
