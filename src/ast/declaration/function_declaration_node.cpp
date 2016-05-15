#include "function_declaration_node.h"

FunctionDeclarationNode::FunctionDeclarationNode(TypeNode *type, DeclarationNode *declarator, StatementNode *stmt)
   : DeclarationNode(NODE_TYPE_FUNCTION_DECLARATION) {
   _type = type;
   _declarator = declarator;
   _stmt = stmt;
}

TypeNode *FunctionDeclarationNode::type(){
   return _type;
}

DeclarationNode *FunctionDeclarationNode::declarator(){
   return _declarator;
}

StatementNode *FunctionDeclarationNode::statement(){
   return _stmt;
}
