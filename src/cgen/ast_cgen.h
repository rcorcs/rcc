#ifndef RCC_AST_CGEN_H
#define RCC_AST_CGEN_H

#include "../ast/ast.h"

#include <string>

using std::string;

class ASTCGen {
public:
   string visit(Node *root);
//EXPRESSION:
   string visitIdentifierNode(IdentifierNode *node);
   string visitIntegerLiteralNode(IntegerLiteralNode *node);
   string visitFloatLiteralNode(FloatLiteralNode *node);
   string visitStringLiteralNode(StringLiteralNode *node);
   string visitPostUnaryExpressionNode(PostUnaryExpressionNode *node);
   string visitPreUnaryExpressionNode(PreUnaryExpressionNode *node);
   string visitBinaryExpressionNode(BinaryExpressionNode *node);
   string visitConditionalExpressionNode(ConditionalExpressionNode *node);
   string visitExpressionListNode(ExpressionListNode *node);
   string visitFunctionCallNode(FunctionCallNode *node);
   string visitArgumentListNode(ArgumentListNode *node);
   string visitArrayReferenceNode(ArrayReferenceNode *node);
   string visitCastNode(CastNode *node);
//STATEMENT:
   string visitBreakNode(BreakNode *node);
   string visitContinueNode(ContinueNode *node);
   string visitReturnNode(ReturnNode *node);
   string visitGotoNode(GotoNode *node);
   string visitCompoundStatementNode(CompoundStatementNode *node);
   string visitExpressionStatementNode(ExpressionStatementNode *node);
   string visitDeclarationStatementNode(DeclarationStatementNode *node);
   string visitIfNode(IfNode *node);
   string visitForNode(ForNode *node);
   string visitWhileNode(WhileNode *node);
   string visitDoWhileNode(DoWhileNode *node);
   string visitLabeledStatementNode(LabeledStatementNode *node);
   string visitSwitchNode(SwitchNode *node);
   string visitCaseStatementNode(CaseStatementNode *node);
   string visitSkipNode(SkipNode *node);
//DECLARATION:
   string visitDeclarationSequenceNode(DeclarationSequenceNode *node);
   string visitFunctionDeclarationNode(FunctionDeclarationNode *node);
   string visitDeclaratorNode(DeclaratorNode *node);
   string visitIdentifierDeclarationNode(IdentifierDeclarationNode *node);
   string visitParameterListNode(ParameterListNode *node);
   string visitPointerDeclaratorNode(PointerDeclaratorNode *node);
   string visitFunctionDeclaratorNode(FunctionDeclaratorNode *node);
   string visitParameterDeclarationNode(ParameterDeclarationNode *node);
   string visitAssignmentNode(AssignmentNode *node);
   string visitVariableDeclarationNode(VariableDeclarationNode *node);
   string visitDeclarationSpecifierNode(DeclarationSpecifierNode *node);
   string visitDeclarationListNode(DeclarationListNode *node);
//TYPE:
   string visitTypeCompositionNode(TypeCompositionNode *node);
   string visitPrimitiveTypeNode(PrimitiveTypeNode *node);
   string vistiQualifierTypeNode(QualifierTypeNode *node);
   string visitFunctionSpecifierNode(FunctionSpecifierNode *node);
   string visitStorageSpecifierNode(StorageSpecifierNode *node);
};

#endif
