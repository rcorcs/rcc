#ifndef RCC_AST_VISITOR_H
#define RCC_AST_VISITOR_H

#include "node.h"
#include "ast.h"

class ASTVisitor {
public:
   void visit(Node *root);
   void visitDeclarationSequenceNode(DeclarationSequenceNode *node);
   void visitFunctionDeclarationNode(FunctionDeclarationNode *node);
   void visitDeclaratorNode(DeclaratorNode *node);
   void visitIdentifierDeclarationNode(IdentifierDeclarationNode *node);
   
   void visitTypeCompositionNode(TypeCompositionNode *node);
   void visitPrimitiveTypeNode(PrimitiveTypeNode *node);
};

#endif
