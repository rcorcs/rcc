#include "ast_cgen.h"

#include "cgen.h"

#include <iostream>

using std::cout;
using std::endl;

string ASTCGen::visit(Node *root){
   if(root==NULL) return "";
   switch(root->nodeType()){
//EXPRESSION:
   case NODE_TYPE_IDENTIFIER:
      return visitIdentifierNode((IdentifierNode *)root);
   case NODE_TYPE_INTEGER_LITERAL:
      return visitIntegerLiteralNode((IntegerLiteralNode *)root);
   case NODE_TYPE_FLOAT_LITERAL:
      return visitFloatLiteralNode((FloatLiteralNode *)root);
   case NODE_TYPE_STRING_LITERAL:
      return visitStringLiteralNode((StringLiteralNode *)root);
   case NODE_TYPE_POST_UNARY_EXPRESSION:
      return visitPostUnaryExpressionNode((PostUnaryExpressionNode *)root);
   case NODE_TYPE_PRE_UNARY_EXPRESSION:
      return visitPreUnaryExpressionNode((PreUnaryExpressionNode *)root);
   case NODE_TYPE_BINARY_EXPRESSION:
      return visitBinaryExpressionNode((BinaryExpressionNode *)root);
   case NODE_TYPE_CONDITIONAL_EXPRESSION:
      return visitConditionalExpressionNode((ConditionalExpressionNode *)root);
   case NODE_TYPE_EXPRESSION_LIST:
      return visitExpressionListNode((ExpressionListNode *)root);
   case NODE_TYPE_FUNCTION_CALL:
      return visitFunctionCallNode((FunctionCallNode *)root);
   case NODE_TYPE_ARGUMENT_LIST:
      return visitArgumentListNode((ArgumentListNode *)root);
   case NODE_TYPE_ARRAY_REFERENCE:
      return visitArrayReferenceNode((ArrayReferenceNode *)root);
//STATEMENT:
   case NODE_TYPE_BREAK:
      return visitBreakNode((BreakNode *)root);
   case NODE_TYPE_CONTINUE:
      return visitContinueNode((ContinueNode *)root);
   case NODE_TYPE_RETURN:
      return visitReturnNode((ReturnNode *)root);
   case NODE_TYPE_GOTO:
      return visitGotoNode((GotoNode *)root);
   case NODE_TYPE_COMPOUND_STATEMENT:
      return visitCompoundStatementNode((CompoundStatementNode *)root);
   case NODE_TYPE_EXPRESSION_STATEMENT:
      return visitExpressionStatementNode((ExpressionStatementNode *)root);
   case NODE_TYPE_DECLARATION_STATEMENT:
      return visitDeclarationStatementNode((DeclarationStatementNode *)root);
   case NODE_TYPE_IF:
      return visitIfNode((IfNode *)root);
   case NODE_TYPE_FOR:
      return visitForNode((ForNode *)root);
   case NODE_TYPE_WHILE:
      return visitWhileNode((WhileNode *)root);
   case NODE_TYPE_DO_WHILE:
      return visitDoWhileNode((DoWhileNode *)root);
   case NODE_TYPE_LABELED_STATEMENT:
      return visitLabeledStatementNode((LabeledStatementNode *)root);
   case NODE_TYPE_SWITCH:
      return visitSwitchNode((SwitchNode *)root);
   case NODE_TYPE_CASE_STATEMENT:
      return visitCaseStatementNode((CaseStatementNode *)root);
   case NODE_TYPE_SKIP:
      return visitSkipNode((SkipNode *)root);
//DECLARATION:
   case NODE_TYPE_DECLARATION_SEQUENCE:
      return visitDeclarationSequenceNode((DeclarationSequenceNode *)root);
   case NODE_TYPE_FUNCTION_DECLARATION:
      return visitFunctionDeclarationNode((FunctionDeclarationNode *)root);
   case NODE_TYPE_DECLARATOR:
      return visitDeclaratorNode((DeclaratorNode *)root);
   case NODE_TYPE_IDENTIFIER_DECLARATION:
      return visitIdentifierDeclarationNode((IdentifierDeclarationNode *)root);
   case NODE_TYPE_PARAMETER_LIST:
      return visitParameterListNode((ParameterListNode *)root);
   case NODE_TYPE_POINTER_DECLARATOR:
      return visitPointerDeclaratorNode((PointerDeclaratorNode *)root);
   case NODE_TYPE_FUNCTION_DECLARATOR:
      return visitFunctionDeclaratorNode((FunctionDeclaratorNode *)root);
   case NODE_TYPE_PARAMETER_DECLARATION:
      return visitParameterDeclarationNode((ParameterDeclarationNode *)root);
//TYPE:
   case NODE_TYPE_TYPE_COMPOSITION:
      return visitTypeCompositionNode((TypeCompositionNode *)root);
   case NODE_TYPE_PRIMITIVE_TYPE:
      return visitPrimitiveTypeNode((PrimitiveTypeNode *)root);
   case NODE_TYPE_QUALIFIER_TYPE:
      return vistiQualifierTypeNode((QualifierTypeNode *)root);
   case NODE_TYPE_FUNCTION_SPECIFIER:
      return visitFunctionSpecifierNode((FunctionSpecifierNode *)root);
   case NODE_TYPE_STORAGE_SPECIFIER:
      return visitStorageSpecifierNode((StorageSpecifierNode *)root);
   default:
      cout << "Unknown node type." << endl;
   }
   return "";
}

//EXPRESSION:
string ASTCGen::visitIdentifierNode(IdentifierNode *node){
   return node->id();
}

string ASTCGen::visitIntegerLiteralNode(IntegerLiteralNode *node){
   return node->literal();
}

string ASTCGen::visitFloatLiteralNode(FloatLiteralNode *node){
   return node->literal();
}

string ASTCGen::visitStringLiteralNode(StringLiteralNode *node){
   return node->literal();
}

string ASTCGen::visitPostUnaryExpressionNode(PostUnaryExpressionNode *node){
   return "("+visit(node->operand())+")"+node->operation();
}

string ASTCGen::visitPreUnaryExpressionNode(PreUnaryExpressionNode *node){
      return node->operation()+"("+visit(node->operand())+")";
}

string ASTCGen::visitBinaryExpressionNode(BinaryExpressionNode *node){
   return "("+visit(node->leftOperand())+")"+node->operation()+"("+visit(node->rightOperand())+")";
}

string ASTCGen::visitConditionalExpressionNode(ConditionalExpressionNode *node){
   return "("+visit(node->condition())+")?("+visit(node->thenExpression())+"):("+visit(node->elseExpression())+")";
}

string ASTCGen::visitExpressionListNode(ExpressionListNode *node){
   string s = visit(node->expression());
   if(node->nextExpression()!=NULL)
      s += ","+visit(node->nextExpression());
   return s;
}

string ASTCGen::visitFunctionCallNode(FunctionCallNode *node){
   return "("+visit(node->address())+")("+visit(node->arguments())+")";
}

string ASTCGen::visitArgumentListNode(ArgumentListNode *node){
   string s = visit(node->expression());
   if(node->nextExpression()!=NULL)
      s += ","+visit(node->nextExpression());
   return s;
}

string ASTCGen::visitArrayReferenceNode(ArrayReferenceNode *node){
   return "("+visit(node->base())+")["+visit(node->offset())+"]";
}

string ASTCGen::visitCastNode(CastNode *node){
   return "("+visit(node->type())+")("+visit(node->operand())+")";
}

//STATEMENT:
string ASTCGen::visitBreakNode(BreakNode *node){
   return "break";
}

string ASTCGen::visitContinueNode(ContinueNode *node){
   return "continue";
}

string ASTCGen::visitReturnNode(ReturnNode *node){
   return "return "+visit(node->expression());
}

string ASTCGen::visitGotoNode(GotoNode *node){
   return "goto "+node->label();
}

string ASTCGen::visitCompoundStatementNode(CompoundStatementNode *node){
   string s = "{\n"+visit(node->statement())+";\n";
   while(node->nextStatement()!=NULL){
      node = node->nextStatement();
      s += visit(node->statement())+";\n";
   }
   s += "}\n";
   return s;
}

string ASTCGen::visitExpressionStatementNode(ExpressionStatementNode *node){
   return visit(node->expression());
}


string ASTCGen::visitDeclarationStatementNode(DeclarationStatementNode *node){
   return visit(node->declaration());
}

string ASTCGen::visitIfNode(IfNode *node){
   return "if("+visit(node->condition())+")"+visit(node->thenStatement())+"else"+visit(node->elseStatement());
}

string ASTCGen::visitForNode(ForNode *node){
   return "for("+visit(node->initialize())+visit(node->condition())+visit(node->step())+")"+visit(node->statement());
}

string ASTCGen::visitWhileNode(WhileNode *node){
   return "while("+visit(node->condition())+")"+visit(node->statement());
}

string ASTCGen::visitDoWhileNode(DoWhileNode *node){
   return "do"+visit(node->statement())+"while("+visit(node->condition())+")";
}

string ASTCGen::visitLabeledStatementNode(LabeledStatementNode *node){
   return node->label()+":"+visit(node->statement());
}

string ASTCGen::visitSwitchNode(SwitchNode *node){
   return "switch("+visit(node->condition())+")"+visit(node->statement());
}

string ASTCGen::visitCaseStatementNode(CaseStatementNode *node){
   return "case "+visit(node->condition())+":"+visit(node->statement());
}

string ASTCGen::visitSkipNode(SkipNode *node){
   return ";//skip\n";
}

//DECLARATION:
string ASTCGen::visitDeclarationSequenceNode(DeclarationSequenceNode *node){
   string s = visit(node->declaration())+";//declaration sequence\n";
   if(node->nextDeclaration()!=NULL)
      s += visit(node->nextDeclaration());
   return s;
}

string ASTCGen::visitFunctionDeclarationNode(FunctionDeclarationNode *node){
   return visit(node->type())+" "+visit(node->declarator())+visit(node->statement());
}

string ASTCGen::visitDeclaratorNode(DeclaratorNode *node){
   return visit(node->declaration());
}

string ASTCGen::visitIdentifierDeclarationNode(IdentifierDeclarationNode *node){
   return node->identifier();
}


string ASTCGen::visitParameterListNode(ParameterListNode *node){
   string s = visit(node->declaration());
   if(node->nextParameter()!=NULL)
      s += ", "+visit(node->nextParameter());
   return s;
}

string ASTCGen::visitPointerDeclaratorNode(PointerDeclaratorNode *node){
   return "* "+visit(node->qualifiers())+" "+visit(node->declaration());
}


string ASTCGen::visitFunctionDeclaratorNode(FunctionDeclaratorNode *node){
   return visit(node->declarator())+"("+visit(node->parameters())+")";
}


string ASTCGen::visitParameterDeclarationNode(ParameterDeclarationNode *node){
   return visit(node->type())+" "+visit(node->declarator());
}


//TYPE:
string ASTCGen::visitTypeCompositionNode(TypeCompositionNode *node){
   string s = visit(node->type());
   if(node->nextType()!=NULL)
      s += " "+visit(node->nextType());
   return s;
}

string ASTCGen::visitPrimitiveTypeNode(PrimitiveTypeNode *node){
   return typeSpecifierName(node->typeSpecifier());
}

string ASTCGen::vistiQualifierTypeNode(QualifierTypeNode *node){
   return typeQualifierName(node->typeQualifier());
}

string ASTCGen::visitFunctionSpecifierNode(FunctionSpecifierNode *node){
   return functionSpecifierName(node->functionSpecifier());
}

string ASTCGen::visitStorageSpecifierNode(StorageSpecifierNode *node){
   return storageSpecifierName(node->storageSpecifier());
}

