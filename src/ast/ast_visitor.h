#ifndef RCC_AST_VISITOR_H
#define RCC_AST_VISITOR_H

#include "node.h"
#include "ast.h"

class ASTVisitor {
public:
   void visit(Node *root);
//EXPRESSION:
   void visitIdentifierNode(IdentifierNode *node);
   void visitIntegerLiteralNode(IntegerLiteralNode *node);
   void visitFloatLiteralNode(FloatLiteralNode *node);
   void visitStringLiteralNode(StringLiteralNode *node);
   void visitPostUnaryExpressionNode(PostUnaryExpressionNode *node);
   void visitPreUnaryExpressionNode(PreUnaryExpressionNode *node);
   void visitBinaryExpressionNode(BinaryExpressionNode *node);
   void visitConditionalExpressionNode(ConditionalExpressionNode *node);
   void visitExpressionListNode(ExpressionListNode *node);
   void visitFunctionCallNode(FunctionCallNode *node);
   void visitArgumentListNode(ArgumentListNode *node);
   void visitArrayReferenceNode(ArrayReferenceNode *node);
   void visitCastNode(CastNode *node);
//STATEMENT:
   void visitBreakNode(BreakNode *node);
   void visitContinueNode(ContinueNode *node);
   void visitReturnNode(ReturnNode *node);
   void visitGotoNode(GotoNode *node);
   void visitCompoundStatementNode(CompoundStatementNode *node);
   void visitExpressionStatementNode(ExpressionStatementNode *node);
   void visitDeclarationStatementNode(DeclarationStatementNode *node);
   void visitIfNode(IfNode *node);
   void visitForNode(ForNode *node);
   void visitWhileNode(WhileNode *node);
   void visitDoWhileNode(DoWhileNode *node);
   void visitLabeledStatementNode(LabeledStatementNode *node);
   void visitSwitchNode(SwitchNode *node);
   void visitCaseStatementNode(CaseStatementNode *node);
   void visitSkipNode(SkipNode *node);
//DECLARATION:
   void visitDeclarationSequenceNode(DeclarationSequenceNode *node);
   void visitFunctionDeclarationNode(FunctionDeclarationNode *node);
   void visitDeclaratorNode(DeclaratorNode *node);
   void visitIdentifierDeclarationNode(IdentifierDeclarationNode *node);
   void visitParameterListNode(ParameterListNode *node);
   void visitPointerDeclaratorNode(PointerDeclaratorNode *node);
   void visitFunctionDeclaratorNode(FunctionDeclaratorNode *node);
   void visitParameterDeclarationNode(ParameterDeclarationNode *node);
   void visitAssignmentNode(AssignmentNode *node);
   void visitVariableDeclarationNode(VariableDeclarationNode *node);
   void visitDeclarationSpecifierNode(DeclarationSpecifierNode *node);
   void visitDeclarationListNode(DeclarationListNode *node);
   void visitAttributeDeclarationNode(AttributeDeclarationNode *node);
   void visitAttributeInitializerNode(AttributeInitializerNode *node);
   void visitExpressionDeclarationNode(ExpressionDeclarationNode *node);
//TYPE:
   void visitTypeCompositionNode(TypeCompositionNode *node);
   void visitPrimitiveTypeNode(PrimitiveTypeNode *node);
   void vistiQualifierTypeNode(QualifierTypeNode *node);
   void visitFunctionSpecifierNode(FunctionSpecifierNode *node);
   void visitStorageSpecifierNode(StorageSpecifierNode *node);
   void visitStructTypeNode(StructTypeNode *node);
   void visitUnionTypeNode(UnionTypeNode *node);
};

#endif
