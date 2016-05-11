#ifndef RCC_AST_ATTRIBUTE_DECLARATION_NODE_H
#define RCC_AST_ATTRIBUTE_DECLARATION_NODE_H


#include "declaration_node.h"
#include "declarator_node.h"
#include "../type/type_node.h"
#include "../expression/expression_node.h"

class AttributeDeclarationNode : public DeclarationNode {
public:
   AttributeDeclarationNode(TypeNode *type, DeclaratorNode *declarator, ExpressionNode *init);
   TypeNode *type();
   void type(TypeNode *t);
   DeclaratorNode *declarator();
   ExpressionNode *initializer();
private:
   TypeNode *_type;
   DeclaratorNode *_declarator;
   ExpressionNode *_init;
};

#endif
