#include "typecheck.h"

#include "../types/composed_type.h"
#include "../types/function_type.h"
#include "../types/primitive_type.h"
#include "../types/qualified_type.h"
#include "../types/storage_type.h"
#include "../types/storage_type.h"

#include "../cgen/cgen.h"

#include <iostream>

using std::cout;
using std::endl;

TypeChecker::TypeChecker(){
   _symbolTable.pushScope();
}

TypeCheckerContext TypeChecker::visit(Node *root){
   TypeCheckerContext ctx;
   if(root==NULL) return ctx;
   
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
   case NODE_TYPE_CAST:
      return visitCastNode((CastNode *)root);      
   case NODE_TYPE_ATTRIBUTE_REFERENCE:
      return visitAttributeReferenceNode((AttributeReferenceNode *)root);
   case NODE_TYPE_SIZEOF:
      return visitSizeOfNode((SizeOfNode *)root);
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
   case NODE_TYPE_ASSIGNMENT:
      return visitAssignmentNode((AssignmentNode *)root);
   case NODE_TYPE_VARIABLE_DECLARATION:
      return visitVariableDeclarationNode((VariableDeclarationNode *)root);
   case NODE_TYPE_DECLARATION_SPECIFIER:
      return visitDeclarationSpecifierNode((DeclarationSpecifierNode *)root);
   case NODE_TYPE_DECLARATION_LIST:
      return visitDeclarationListNode((DeclarationListNode *)root);
   case NODE_TYPE_ATTRIBUTE_DECLARATION:
      return visitAttributeDeclarationNode((AttributeDeclarationNode *)root);
   case NODE_TYPE_ATTRIBUTE_INITIALIZER:
      return visitAttributeInitializerNode((AttributeInitializerNode *)root);
   case NODE_TYPE_EXPRESSION_DECLARATION:
      return visitExpressionDeclarationNode((ExpressionDeclarationNode *)root);
   case NODE_TYPE_TYPE_DECLARATION:
      return visitTypeDeclarationNode((TypeDeclarationNode *)root);
   case NODE_TYPE_ARRAY_DECLARATION:
      return visitArrayDeclarationNode((ArrayDeclarationNode *)root);
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
   case NODE_TYPE_STRUCT_TYPE:
      return visitStructTypeNode((StructTypeNode *)root);
   case NODE_TYPE_UNION_TYPE:
      return visitUnionTypeNode((UnionTypeNode *)root);
   default:
      cout << "Unknown node type." << endl;
   }
   return ctx;
}

//EXPRESSION:
TypeCheckerContext TypeChecker::visitIdentifierNode(IdentifierNode *node){
   IdentifierInformation *idInfo = _symbolTable.lookup(node->id());
   if(idInfo==NULL){
      cout << "ERROR: Unknown identifier " << node->id() << endl;
   }else{
      cout << "Identifier " << idInfo->identifier() << " : " << idInfo->type() << endl;
   }
   TypeCheckerContext ctx;
   //ctx.addIdentifier(idInfo);
   return ctx;
}

TypeCheckerContext TypeChecker::visitIntegerLiteralNode(IntegerLiteralNode *node){
   TypeCheckerContext ctx;
   ctx.composeType(new PrimitiveType(TypeSpecifier::TYPE_INT));
   return ctx;
}

TypeCheckerContext TypeChecker::visitFloatLiteralNode(FloatLiteralNode *node){
   TypeCheckerContext ctx;
   ctx.composeType(new PrimitiveType(TypeSpecifier::TYPE_FLOAT));
   return ctx;
}

TypeCheckerContext TypeChecker::visitStringLiteralNode(StringLiteralNode *node){
   TypeCheckerContext ctx;
   ctx.composeType(new PointerType());
   ctx.composeType(new PrimitiveType(TypeSpecifier::TYPE_CHAR));
   return ctx;
}

TypeCheckerContext TypeChecker::visitPostUnaryExpressionNode(PostUnaryExpressionNode *node){
   TypeCheckerContext ctx = visit(node->operand());
   //node->operation();
   return ctx;
}

TypeCheckerContext TypeChecker::visitPreUnaryExpressionNode(PreUnaryExpressionNode *node){
   TypeCheckerContext ctx = visit(node->operand());
   //node->operation();
   return ctx;
}

TypeCheckerContext TypeChecker::visitBinaryExpressionNode(BinaryExpressionNode *node){
   TypeCheckerContext leftCtx = visit(node->leftOperand());
   //node->operation();
   TypeCheckerContext rightCtx = visit(node->rightOperand());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitConditionalExpressionNode(ConditionalExpressionNode *node){
   visit(node->condition());
   visit(node->thenExpression());
   visit(node->elseExpression());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitExpressionListNode(ExpressionListNode *node){
   visit(node->expression());
   if(node->nextExpression()!=NULL)
      visit(node->nextExpression());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitFunctionCallNode(FunctionCallNode *node){
   visit(node->address());
   visit(node->arguments());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitArgumentListNode(ArgumentListNode *node){
   visit(node->expression());
   if(node->nextExpression()!=NULL)
      visit(node->nextExpression());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitArrayReferenceNode(ArrayReferenceNode *node){
   visit(node->base());
   visit(node->offset());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitCastNode(CastNode *node){
   visit(node->typeDeclation());
   visit(node->operand());
   TypeCheckerContext ctx;
   return ctx;
}


TypeCheckerContext TypeChecker::visitAttributeReferenceNode(AttributeReferenceNode *node){
   visit(node->base());
   //node->operation();
   //node->identifier();
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitSizeOfNode(SizeOfNode *node){
   //"sizeof ("+visit(node->typeDeclation())+")";
   TypeCheckerContext ctx;
   return ctx;
}

//STATEMENT:
TypeCheckerContext TypeChecker::visitBreakNode(BreakNode *node){
   //return "break;";
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitContinueNode(ContinueNode *node){
   //return "continue;";
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitReturnNode(ReturnNode *node){
   //return "return "+visit(node->expression())+";";
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitGotoNode(GotoNode *node){
   //return "goto "+node->label()+";";
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitCompoundStatementNode(CompoundStatementNode *node){
   _symbolTable.pushScope();
   visit(node->statement());
   while(node->nextStatement()!=NULL){
      node = node->nextStatement();
      visit(node->statement());
   }

   delete _symbolTable.popScope();
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitExpressionStatementNode(ExpressionStatementNode *node){
   visit(node->expression());
   TypeCheckerContext ctx;
   return ctx;
}


TypeCheckerContext TypeChecker::visitDeclarationStatementNode(DeclarationStatementNode *node){
   visit(node->declaration());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitIfNode(IfNode *node){
   visit(node->condition());
   visit(node->thenStatement());
   visit(node->elseStatement());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitForNode(ForNode *node){
   visit(node->initialize());
   visit(node->condition());
   visit(node->step());
   visit(node->statement());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitWhileNode(WhileNode *node){
   visit(node->condition());
   visit(node->statement());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitDoWhileNode(DoWhileNode *node){
   visit(node->statement());
   visit(node->condition());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitLabeledStatementNode(LabeledStatementNode *node){
   node->label();
   visit(node->statement());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitSwitchNode(SwitchNode *node){
   visit(node->condition());
   visit(node->statement());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitCaseStatementNode(CaseStatementNode *node){
   visit(node->condition());
   visit(node->statement());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitSkipNode(SkipNode *node){
   //return "/* skip */ ;";
   TypeCheckerContext ctx;
   return ctx;
}

//DECLARATION:
TypeCheckerContext TypeChecker::visitDeclarationSequenceNode(DeclarationSequenceNode *node){
   if(node->declaration()!=NULL)
      visit(node->declaration());
   if(node->nextDeclaration()!=NULL)
      visit(node->nextDeclaration());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitFunctionDeclarationNode(FunctionDeclarationNode *node){
   TypeCheckerContext typeCtx = visit(node->type());
   TypeCheckerContext ctx = visit(node->declarator());
   ctx.composeType(typeCtx.type());
   ctx.bindTypeToIdentifiers();

   if(node->statement()!=NULL){
      visit(node->statement());
      //ctx.typeStr += " [Declaration]";
   }else {
      //ctx.typeStr += " [Prototype]";
   }
   //cout << "FUNCTION: " << ctx.typeStr << endl;

   return ctx;
}

TypeCheckerContext TypeChecker::visitDeclaratorNode(DeclaratorNode *node){
   return visit(node->declaration());
   //TypeCheckerContext ctx;
   //return ctx;
}

TypeCheckerContext TypeChecker::visitIdentifierDeclarationNode(IdentifierDeclarationNode *node){
   if(_symbolTable.isAtCurrentScope(node->identifier())){
      IdentifierInformation *idInfo = _symbolTable.lookup(node->identifier());
      cout << "ERROR: Identifier " << node->identifier() << " is already defined" << endl;
      cout << "Identifier " << idInfo->identifier() << " : " << idInfo->type() << endl;
   }
   //node->identifier();
   TypeCheckerContext ctx;
   IdentifierInformation *idInfo = new IdentifierInformation(node->identifier());
   ctx.addIdentifier(idInfo);
   _symbolTable.insertAtCurrentScope(idInfo);
   //ctx.composeType(node->identifier());
   return ctx;
}


TypeCheckerContext TypeChecker::visitParameterListNode(ParameterListNode *node){
   TypeCheckerContext ctx = visit(node->declaration());
   ctx.bindTypeToIdentifiers();
   if(node->nextParameter()!=NULL){
      ctx.mergeIdentifiers(visit(node->nextParameter()));
   }
   //TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitPointerDeclaratorNode(PointerDeclaratorNode *node){
   TypeCheckerContext typeCtx = visit(node->qualifiers());
   TypeCheckerContext ctx = visit(node->declaration());
   //TODO add pointer type
   //ctx.composeType("*"+typeCtx.typeStr);
   return ctx;
}


TypeCheckerContext TypeChecker::visitFunctionDeclaratorNode(FunctionDeclaratorNode *node){
   TypeCheckerContext ctx = visit(node->declarator());
   TypeCheckerContext paramsCtx = visit(node->parameters());
   //TODO add params type
   //ctx.composeType(" params:("+paramsCtx.typeStr+")");
   return ctx;
}


TypeCheckerContext TypeChecker::visitParameterDeclarationNode(ParameterDeclarationNode *node){
   TypeCheckerContext typeCtx = visit(node->type());
   TypeCheckerContext ctx = visit(node->declarator());
   ctx.bindTypeToIdentifiers(typeCtx.type());
   return ctx;
}

TypeCheckerContext TypeChecker::visitAssignmentNode(AssignmentNode *node){
   TypeCheckerContext ctx = visit(node->declarator());
   if(node->initializer()!=NULL){
      visit(node->initializer());
   }
   return ctx;
}

TypeCheckerContext TypeChecker::visitVariableDeclarationNode(VariableDeclarationNode *node){
   TypeCheckerContext typeCtx = visit(node->specifier());
   TypeCheckerContext ctx = visit(node->declarator());
   ctx.bindTypeToIdentifiers(typeCtx.type());
   //cout << "VARIABLE: " << ctx.typeStr << endl;
   /*for(int i = 0; i<ctx._idInfos.size(); i++){
         IdentifierInformation *idInfo = ctx._idInfos[i];
         cout << "VARIABLE: " << idInfo->identifier() << " : " << idInfo->type() << endl;
   }*/
   return ctx;
}

TypeCheckerContext TypeChecker::visitDeclarationSpecifierNode(DeclarationSpecifierNode *node){
   TypeCheckerContext ctx = visit(node->typeSpecifier());
   return ctx;
}

TypeCheckerContext TypeChecker::visitDeclarationListNode(DeclarationListNode *node){
   TypeCheckerContext ctx = visit(node->declaration());
   ctx.bindTypeToIdentifiers();
   if(node->nextDeclaration()!=NULL){
      ctx.mergeIdentifiers(visit(node->nextDeclaration()));
      //ctx.typeStr += "; "+ctxDecl.typeStr;
   }
   return ctx;
}

TypeCheckerContext TypeChecker::visitAttributeDeclarationNode(AttributeDeclarationNode *node){
   visit(node->specifier());
   visit(node->declarator());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitAttributeInitializerNode(AttributeInitializerNode *node){
   visit(node->declarator());
   if(node->initializer()){
      visit(node->initializer());
   }
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitExpressionDeclarationNode(ExpressionDeclarationNode *node){
   visit(node->expression());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitTypeDeclarationNode(TypeDeclarationNode *node){
   visit(node->specifier());
   visit(node->declarator());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitArrayDeclarationNode(ArrayDeclarationNode *node){
   visit(node->declarator());
   visit(node->qualifiers());
   visit(node->size());
   TypeCheckerContext ctx;
   return ctx;
}
     
     
//TYPE:
TypeCheckerContext TypeChecker::visitTypeCompositionNode(TypeCompositionNode *node){
   TypeCheckerContext ctx = visit(node->type());
   if(node->nextType()!=NULL){
      TypeCheckerContext typeCtx = visit(node->nextType());
      ctx.composeType(typeCtx.type());
   }
   return ctx;
}

TypeCheckerContext TypeChecker::visitPrimitiveTypeNode(PrimitiveTypeNode *node){
   TypeCheckerContext ctx;
   //ctx.composeType(typeSpecifierName(node->typeSpecifier()));
   ctx.composeType(new PrimitiveType(node->typeSpecifier()));
   return ctx;
}

TypeCheckerContext TypeChecker::vistiQualifierTypeNode(QualifierTypeNode *node){
   TypeCheckerContext ctx;
   //ctx.composeType(typeQualifierName(node->typeQualifier()));
   ctx.composeType(new QualifiedType(node->typeQualifier()));
   return ctx;
}

TypeCheckerContext TypeChecker::visitFunctionSpecifierNode(FunctionSpecifierNode *node){
   TypeCheckerContext ctx;
   //ctx.composeType(functionSpecifierName(node->functionSpecifier()));
   //ctx.composeType(functionSpecifierName(node->functionSpecifier()));
   return ctx;
}

TypeCheckerContext TypeChecker::visitStorageSpecifierNode(StorageSpecifierNode *node){
   TypeCheckerContext ctx;
   //ctx.composeType(storageSpecifierName(node->storageSpecifier()));
   ctx.composeType(new StorageType(node->storageSpecifier()));
   return ctx;
}

TypeCheckerContext TypeChecker::visitStructTypeNode(StructTypeNode *node){
   //string s = "struct "+node->identifier();
   if(node->declaration()!=NULL)
      visit(node->declaration());
   TypeCheckerContext ctx;
   return ctx;
}

TypeCheckerContext TypeChecker::visitUnionTypeNode(UnionTypeNode *node){
   //string s = "union "+node->identifier();
   if(node->declaration()!=NULL)
      visit(node->declaration());
   TypeCheckerContext ctx;
   return ctx;
}

