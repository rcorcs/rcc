#include "ast_visitor.h"

#include "../cgen/cgen.h"

#include <iostream>

using std::cout;
using std::endl;

void ASTVisitor::visit(Node *root){
   if(root==NULL) return;
   switch(root->nodeType()){
//EXPRESSION:
   case NODE_TYPE_IDENTIFIER:
      visitIdentifierNode((IdentifierNode *)root);
      break;
   case NODE_TYPE_INTEGER_LITERAL:
      visitIntegerLiteralNode((IntegerLiteralNode *)root);
      break;
   case NODE_TYPE_FLOAT_LITERAL:
      visitFloatLiteralNode((FloatLiteralNode *)root);
      break;
   case NODE_TYPE_STRING_LITERAL:
      visitStringLiteralNode((StringLiteralNode *)root);
      break;
   case NODE_TYPE_POST_UNARY_EXPRESSION:
      visitPostUnaryExpressionNode((PostUnaryExpressionNode *)root);
      break;
   case NODE_TYPE_PRE_UNARY_EXPRESSION:
      visitPreUnaryExpressionNode((PreUnaryExpressionNode *)root);
      break;
   case NODE_TYPE_BINARY_EXPRESSION:
      visitBinaryExpressionNode((BinaryExpressionNode *)root);
      break;
   case NODE_TYPE_CONDITIONAL_EXPRESSION:
      visitConditionalExpressionNode((ConditionalExpressionNode *)root);
      break;
   case NODE_TYPE_EXPRESSION_LIST:
      visitExpressionListNode((ExpressionListNode *)root);
      break;
   case NODE_TYPE_FUNCTION_CALL:
      visitFunctionCallNode((FunctionCallNode *)root);
      break;
   case NODE_TYPE_ARGUMENT_LIST:
      visitArgumentListNode((ArgumentListNode *)root);
      break;
   case NODE_TYPE_ARRAY_REFERENCE:
      visitArrayReferenceNode((ArrayReferenceNode *)root);
      break;
//STATEMENT:
   case NODE_TYPE_BREAK:
      visitBreakNode((BreakNode *)root);
      break;
   case NODE_TYPE_CONTINUE:
      visitContinueNode((ContinueNode *)root);
      break;
   case NODE_TYPE_RETURN:
      visitReturnNode((ReturnNode *)root);
      break;
   case NODE_TYPE_GOTO:
      visitGotoNode((GotoNode *)root);
      break;
   case NODE_TYPE_COMPOUND_STATEMENT:
      visitCompoundStatementNode((CompoundStatementNode *)root);
      break;
   case NODE_TYPE_EXPRESSION_STATEMENT:
      visitExpressionStatementNode((ExpressionStatementNode *)root);
      break;
   case NODE_TYPE_DECLARATION_STATEMENT:
      visitDeclarationStatementNode((DeclarationStatementNode *)root);
      break;
   case NODE_TYPE_IF:
      visitIfNode((IfNode *)root);
      break;
   case NODE_TYPE_FOR:
      visitForNode((ForNode *)root);
      break;
   case NODE_TYPE_WHILE:
      visitWhileNode((WhileNode *)root);
      break;
   case NODE_TYPE_DO_WHILE:
      visitDoWhileNode((DoWhileNode *)root);
      break;
   case NODE_TYPE_LABELED_STATEMENT:
      visitLabeledStatementNode((LabeledStatementNode *)root);
      break;
   case NODE_TYPE_SWITCH:
      visitSwitchNode((SwitchNode *)root);
      break;
   case NODE_TYPE_CASE_STATEMENT:
      visitCaseStatementNode((CaseStatementNode *)root);
      break;
   case NODE_TYPE_SKIP:
      visitSkipNode((SkipNode *)root);
      break;
//DECLARATION:
   case NODE_TYPE_DECLARATION_SEQUENCE:
      visitDeclarationSequenceNode((DeclarationSequenceNode *)root);
      break;
   case NODE_TYPE_FUNCTION_DECLARATION:
      visitFunctionDeclarationNode((FunctionDeclarationNode *)root);
      break;
   case NODE_TYPE_DECLARATOR:
      visitDeclaratorNode((DeclaratorNode *)root);
      break;
   case NODE_TYPE_IDENTIFIER_DECLARATION:
      visitIdentifierDeclarationNode((IdentifierDeclarationNode *)root);
      break;
   case NODE_TYPE_PARAMETER_LIST:
      visitParameterListNode((ParameterListNode *)root);
      break;
   case NODE_TYPE_POINTER_DECLARATOR:
      visitPointerDeclaratorNode((PointerDeclaratorNode *)root);
      break;
   case NODE_TYPE_FUNCTION_DECLARATOR:
      visitFunctionDeclaratorNode((FunctionDeclaratorNode *)root);
      break;
   case NODE_TYPE_PARAMETER_DECLARATION:
      visitParameterDeclarationNode((ParameterDeclarationNode *)root);
      break;
//TYPE:
   case NODE_TYPE_TYPE_COMPOSITION:
      visitTypeCompositionNode((TypeCompositionNode *)root);
      break;
   case NODE_TYPE_PRIMITIVE_TYPE:
      visitPrimitiveTypeNode((PrimitiveTypeNode *)root);
      break;
   case NODE_TYPE_QUALIFIER_TYPE:
      vistiQualifierTypeNode((QualifierTypeNode *)root);
      break;
   case NODE_TYPE_FUNCTION_SPECIFIER:
      visitFunctionSpecifierNode((FunctionSpecifierNode *)root);
      break;
   case NODE_TYPE_STORAGE_SPECIFIER:
      visitStorageSpecifierNode((StorageSpecifierNode *)root);
      break;
   default:
      cout << "Unknown node type." << endl;
   }
}

//EXPRESSION:
void ASTVisitor::visitIdentifierNode(IdentifierNode *node){
   cout << "Visiting IdentifierNode" << endl;
   cout << "ID: " << node->id() << endl;
}

void ASTVisitor::visitIntegerLiteralNode(IntegerLiteralNode *node){
   cout << "Visiting IntegerLiteralNode" << endl;
   cout << "INT LITERAL: " << node->literal() << endl;
}

void ASTVisitor::visitFloatLiteralNode(FloatLiteralNode *node){
   cout << "Visiting FloatLiteralNode" << endl;
   cout << "FLOAT LITERAL: " << node->literal() << endl;
}

void ASTVisitor::visitStringLiteralNode(StringLiteralNode *node){
   cout << "Visiting StringLiteralNode" << endl;
   cout << "STRING LITERAL: " << node->literal() << endl;
}

void ASTVisitor::visitPostUnaryExpressionNode(PostUnaryExpressionNode *node){
   cout << "Visiting PostUnaryExpressionNode" << endl;
   cout << "Operation: " << node->operation() << endl;
   cout << "Operand: " << endl;
   visit(node->operand());
}

void ASTVisitor::visitPreUnaryExpressionNode(PreUnaryExpressionNode *node){
   cout << "Visiting PreUnaryExpressionNode" << endl;
   cout << "Operation: " << node->operation() << endl;
   cout << "Operand: " << endl;
   visit(node->operand());
}

void ASTVisitor::visitBinaryExpressionNode(BinaryExpressionNode *node){
   cout << "Visiting BinaryExpressionNode" << endl;
   cout << "Left Operand: " << endl;
   visit(node->leftOperand());
   cout << "Operation: " << node->operation() << endl;
   cout << "Right Operand: " << endl;
   visit(node->rightOperand());
}

void ASTVisitor::visitConditionalExpressionNode(ConditionalExpressionNode *node){
   cout << "Visiting ConditionalExpressionNode" << endl;
   cout << "condition: " << endl;
   visit(node->condition());
   cout << "thenExpression: " << endl;
   visit(node->thenExpression());
   cout << "elseExpression: " << endl;
   visit(node->elseExpression());
}

void ASTVisitor::visitExpressionListNode(ExpressionListNode *node){
   cout << "Visiting ExpressionListNode" << endl;
   visit(node->expression());
   visit(node->nextExpression());
}

void ASTVisitor::visitFunctionCallNode(FunctionCallNode *node){
   cout << "Visiting FunctionCallNode" << endl;
   cout << "address: " << endl;
   visit(node->address());
   cout << "arguments: " << endl;
   visit(node->arguments());
}

void ASTVisitor::visitArgumentListNode(ArgumentListNode *node){
   cout << "Visiting ArgumentListNode" << endl;
   visit(node->expression());
   visit(node->nextExpression());
}

void ASTVisitor::visitArrayReferenceNode(ArrayReferenceNode *node){
   cout << "Visiting ArrayReferenceNode" << endl;
   cout << "base: " << endl;
   visit(node->base());
   cout << "offset: " << endl;
   visit(node->offset());
}

void ASTVisitor::visitCastNode(CastNode *node){
   cout << "Visiting CastNode" << endl;
   cout << "type: " << endl;
   visit(node->type());
   cout << "operand: " << endl;
   visit(node->operand());
}

//STATEMENT:
void ASTVisitor::visitBreakNode(BreakNode *node){
   cout << "Visiting BreakNode" << endl;
}

void ASTVisitor::visitContinueNode(ContinueNode *node){
   cout << "Visiting ContinueNode" << endl;
}

void ASTVisitor::visitReturnNode(ReturnNode *node){
   cout << "Visiting ReturnNode" << endl;
   visit(node->expression());
}

void ASTVisitor::visitGotoNode(GotoNode *node){
   cout << "Visiting GotoNode" << endl;
   cout << "Goto: " << node->label() << endl;
}

void ASTVisitor::visitCompoundStatementNode(CompoundStatementNode *node){
   cout << "Visiting CompoundStatementNode" << endl;
   visit(node->statement());
   visit(node->nextStatement());
}

void ASTVisitor::visitExpressionStatementNode(ExpressionStatementNode *node){
   cout << "Visiting ExpressionStatementNode" << endl;
   visit(node->expression());
}


void ASTVisitor::visitDeclarationStatementNode(DeclarationStatementNode *node){
   cout << "Visiting DeclarationStatementNode" << endl;
   visit(node->declaration());
}

void ASTVisitor::visitIfNode(IfNode *node){
   cout << "Visiting IfNode" << endl;
   cout << "condition:" << endl;
   visit(node->condition());
   cout << "thenStatement:" << endl;
   visit(node->thenStatement());
   cout << "elseStatement:" << endl;
   visit(node->elseStatement());
}

void ASTVisitor::visitForNode(ForNode *node){
   cout << "Visiting ForNode" << endl;
   cout << "initialize:" << endl;
   visit(node->initialize());
   cout << "condition:" << endl;
   visit(node->condition());
   cout << "step:" << endl;
   visit(node->step());
   cout << "statement:" << endl;
   visit(node->statement());
}

void ASTVisitor::visitWhileNode(WhileNode *node){
   cout << "Visiting WhileNode" << endl;
   cout << "condition:" << endl;
   visit(node->condition());
   cout << "statement:" << endl;
   visit(node->statement());
}

void ASTVisitor::visitDoWhileNode(DoWhileNode *node){
   cout << "Visiting DoWhileNode" << endl;
   cout << "statement:" << endl;
   visit(node->statement());
   cout << "condition:" << endl;
   visit(node->condition());
}

void ASTVisitor::visitLabeledStatementNode(LabeledStatementNode *node){
   cout << "Visiting LabeledStatementNode" << endl;
   cout << "label:" << node->label() << endl;
   visit(node->statement());
}

void ASTVisitor::visitSwitchNode(SwitchNode *node){
   cout << "Visiting SwitchNode" << endl;
   cout << "condition:" << endl;
   visit(node->condition());
   cout << "statement:" << endl;
   visit(node->statement());
}

void ASTVisitor::visitCaseStatementNode(CaseStatementNode *node){
   cout << "Visiting CaseStatementNode" << endl;
   cout << "condition:" << endl;
   visit(node->condition());
   cout << "statement:" << endl;
   visit(node->statement());
}

void ASTVisitor::visitSkipNode(SkipNode *node){
   cout << "Visiting SkipNode" << endl;
}

//DECLARATION:
void ASTVisitor::visitDeclarationSequenceNode(DeclarationSequenceNode *node){
   cout << "Visiting DeclarationSequenceNode" << endl;
   visit(node->declaration());
   visit(node->nextDeclaration());
}

void ASTVisitor::visitFunctionDeclarationNode(FunctionDeclarationNode *node){
   cout << "Visiting FunctionDeclarationNode" << endl;
   visit(node->type());
   visit(node->declarator());
   visit(node->statement());
}

void ASTVisitor::visitDeclaratorNode(DeclaratorNode *node){
   cout << "Visiting DeclaratorNode" << endl;
   visit(node->declaration());
}

void ASTVisitor::visitIdentifierDeclarationNode(IdentifierDeclarationNode *node){
   cout << "Visiting IdentifierDeclarationNode" << endl;
   cout << "ID: " << node->identifier() << endl;
}

void ASTVisitor::visitParameterListNode(ParameterListNode *node){
   cout << "Visiting ParameterListNode" << endl;
   visit(node->declaration());
   visit(node->nextParameter());
}

void ASTVisitor::visitPointerDeclaratorNode(PointerDeclaratorNode *node){
   cout << "Visiting PointerDeclaratorNode" << endl;
   cout << "qualifiers:" << endl;
   visit(node->qualifiers());
   cout << "declaration:" << endl;
   visit(node->declaration());
}

void ASTVisitor::visitFunctionDeclaratorNode(FunctionDeclaratorNode *node){
   cout << "Visiting FunctionDeclaratorNode" << endl;
   cout << "declarator:" << endl;
   visit(node->declarator());
   cout << "parameters:" << endl;
   visit(node->parameters());
}

void ASTVisitor::visitParameterDeclarationNode(ParameterDeclarationNode *node){
   cout << "Visiting ParameterDeclarationNode" << endl;
   cout << "type:" << endl;
   visit(node->type());
   cout << "declarator:" << endl;
   visit(node->declarator());
}

//TYPE:
void ASTVisitor::visitTypeCompositionNode(TypeCompositionNode *node){
   cout << "Visiting TypeCompositionNode" << endl;
   visit(node->type());
   visit(node->nextType());
}

void ASTVisitor::visitPrimitiveTypeNode(PrimitiveTypeNode *node){
   cout << "Visiting PrimitiveTypeNode" << endl;
   cout << "Type: " << typeSpecifierName(node->typeSpecifier()) << endl;
}

void ASTVisitor::vistiQualifierTypeNode(QualifierTypeNode *node){
   cout << "Visiting QualifierTypeNode" << endl;
   cout << "Type: " << typeQualifierName(node->typeQualifier()) << endl;   
}

void ASTVisitor::visitFunctionSpecifierNode(FunctionSpecifierNode *node){
   cout << "Visiting FunctionSpecifierNode" << endl;
   cout << "Type: " << functionSpecifierName(node->functionSpecifier()) << endl;
}

void ASTVisitor::visitStorageSpecifierNode(StorageSpecifierNode *node){
   cout << "Visiting StorageSpecifierNode" << endl;
   cout << "Type: " << storageSpecifierName(node->storageSpecifier()) << endl;
}


