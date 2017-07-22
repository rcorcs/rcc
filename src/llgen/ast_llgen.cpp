#include "ast_llgen.h"

#include <iostream>

using std::cout;
using std::endl;

ASTLLGen::ASTLLGen(char *moduleName){
  Builder = new llvm::IRBuilder<>(Context);
  M = new llvm::Module(moduleName, Context);
  F = nullptr;
  type = nullptr;
}

LLGenContext ASTLLGen::visit(Node *root){
   LLGenContext emptyCtx;
   if(root==NULL) return emptyCtx;
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
   return emptyCtx;
}

//EXPRESSION:
LLGenContext ASTLLGen::visitIdentifierNode(IdentifierNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitIntegerLiteralNode(IntegerLiteralNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitFloatLiteralNode(FloatLiteralNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitStringLiteralNode(StringLiteralNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitPostUnaryExpressionNode(PostUnaryExpressionNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitPreUnaryExpressionNode(PreUnaryExpressionNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitBinaryExpressionNode(BinaryExpressionNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitConditionalExpressionNode(ConditionalExpressionNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitExpressionListNode(ExpressionListNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitFunctionCallNode(FunctionCallNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitArgumentListNode(ArgumentListNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitArrayReferenceNode(ArrayReferenceNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitCastNode(CastNode *node){
   LLGenContext ctx;
   return ctx;
}


LLGenContext ASTLLGen::visitAttributeReferenceNode(AttributeReferenceNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitSizeOfNode(SizeOfNode *node){
   LLGenContext ctx;
   return ctx;
}

//STATEMENT:
LLGenContext ASTLLGen::visitBreakNode(BreakNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitContinueNode(ContinueNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitReturnNode(ReturnNode *node){
   LLGenContext expCtx = visit(node->expression());

   LLGenContext ctx;
   if(expCtx.value!=nullptr){
      ctx.value = Builder->CreateRet(expCtx.value);
   }else{
      ctx.value = Builder->CreateRetVoid();
   }

   return ctx;
}

LLGenContext ASTLLGen::visitGotoNode(GotoNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitCompoundStatementNode(CompoundStatementNode *node){
   LLGenContext ctx;
   ctx.BB = llvm::BasicBlock::Create(Context, "", F);
   Builder->SetInsertPoint(ctx.BB);
   
   visit(node->statement());
   while(node->nextStatement()!=NULL){
      node = node->nextStatement();
      visit(node->statement());
   }

   return ctx;
}

LLGenContext ASTLLGen::visitExpressionStatementNode(ExpressionStatementNode *node){
   LLGenContext ctx;
   return ctx;
}


LLGenContext ASTLLGen::visitDeclarationStatementNode(DeclarationStatementNode *node){
   return visit(node->declaration());
}

LLGenContext ASTLLGen::visitIfNode(IfNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitForNode(ForNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitWhileNode(WhileNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitDoWhileNode(DoWhileNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitLabeledStatementNode(LabeledStatementNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitSwitchNode(SwitchNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitCaseStatementNode(CaseStatementNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitSkipNode(SkipNode *node){
   LLGenContext ctx;
   return ctx;
}

//DECLARATION:
LLGenContext ASTLLGen::visitDeclarationSequenceNode(DeclarationSequenceNode *node){
   LLGenContext ctx;

   if(node->declaration()!=NULL)
      ctx = visit(node->declaration());

   if(node->nextDeclaration()!=NULL)
      ctx = visit(node->nextDeclaration());

   return ctx;
}

LLGenContext ASTLLGen::visitFunctionDeclarationNode(FunctionDeclarationNode *node){
   //return visit(node->type())+" "+visit(node->declarator())+visit(node->statement());
   LLGenContext emptyCtx;

   LLGenContext declaratorCtx = visit(node->declarator());

   LLGenContext typeCtx = visit(node->type());
   llvm::ArrayRef<llvm::Type*> params(declaratorCtx.paramTy);
  
   if(typeCtx.type==nullptr) return emptyCtx;

   llvm::FunctionType *funcType = llvm::FunctionType::get(typeCtx.type, params, false);

   llvm::Function *func = llvm::Function::Create(funcType, llvm::Function::ExternalLinkage, declaratorCtx.str, M);

   if(declaratorCtx.paramName.size()==declaratorCtx.paramTy.size()){
      unsigned idx = 0;
      llvm::Function::arg_iterator AI, AE;
      for(AI = func->arg_begin(), AE = func->arg_end(); AI!=AE; AI++, idx++){
         AI->setName(declaratorCtx.paramName[idx]);
      }
   }

   this->F = func;
   visit(node->statement());
   this->F = nullptr;

   return emptyCtx;
}

LLGenContext ASTLLGen::visitDeclaratorNode(DeclaratorNode *node){
   return visit(node->declaration());
}

LLGenContext ASTLLGen::visitIdentifierDeclarationNode(IdentifierDeclarationNode *node){
   LLGenContext ctx;
   ctx.str = node->identifier();
   ctx.type = this->type;
   return ctx;
}


LLGenContext ASTLLGen::visitParameterListNode(ParameterListNode *node){

   LLGenContext ctx;

   while(node!=NULL){
      LLGenContext paramCtx = visit(node->declaration());
      if(paramCtx.type!=nullptr){
         ctx.paramTy.push_back(paramCtx.type);
         if(paramCtx.str.size()>0)
            ctx.paramName.push_back(paramCtx.str);
      }
      node = node->nextParameter();
   }

   return ctx;
}

LLGenContext ASTLLGen::visitPointerDeclaratorNode(PointerDeclaratorNode *node){
   //return "* "+visit(node->qualifiers())+" "+visit(node->declaration());
   llvm::Type *tmpType = this->type;
   this->type = llvm::PointerType::get(tmpType,0);

   LLGenContext ctx = visit(node->declaration());
   
   this->type = tmpType;
   
   return ctx;
}


LLGenContext ASTLLGen::visitFunctionDeclaratorNode(FunctionDeclaratorNode *node){
   //return visit(node->declarator())+"("+visit(node->parameters())+")";
   LLGenContext ctx = visit(node->parameters());
   LLGenContext nameCtx = visit(node->declarator());
   ctx.str = nameCtx.str;
   return ctx;
}


LLGenContext ASTLLGen::visitParameterDeclarationNode(ParameterDeclarationNode *node){
   LLGenContext typeCtx = visit(node->type());
   this->type = typeCtx.type;
   LLGenContext ctx = visit(node->declarator());
   this->type = nullptr;

   return ctx;
}

LLGenContext ASTLLGen::visitAssignmentNode(AssignmentNode *node){
   LLGenContext varCtx = visit(node->declarator());

   Builder->CreateAlloca(varCtx.type,nullptr, varCtx.str);

   if(node->initializer()!=NULL){
      LLGenContext expCtx = visit(node->initializer());
   }

   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitVariableDeclarationNode(VariableDeclarationNode *node){
   LLGenContext typeCtx = visit(node->specifier());
   this->type = typeCtx.type;

   visit(node->declarator());

   this->type = nullptr;
   
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitDeclarationSpecifierNode(DeclarationSpecifierNode *node){
   return visit(node->typeSpecifier());
}

LLGenContext ASTLLGen::visitDeclarationListNode(DeclarationListNode *node){
   LLGenContext varCtx = visit(node->declaration());
   if(this->F!=nullptr && varCtx.type!=nullptr && varCtx.str.size()>0){
      Builder->CreateAlloca(varCtx.type,nullptr, varCtx.str);
   }
   if(node->nextDeclaration()!=NULL)
      visit(node->nextDeclaration());

   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitAttributeDeclarationNode(AttributeDeclarationNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitAttributeInitializerNode(AttributeInitializerNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitExpressionDeclarationNode(ExpressionDeclarationNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitTypeDeclarationNode(TypeDeclarationNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitArrayDeclarationNode(ArrayDeclarationNode *node){
   LLGenContext ctx;
   return ctx;
}
     
     
//TYPE:
LLGenContext ASTLLGen::visitTypeCompositionNode(TypeCompositionNode *node){
   LLGenContext ctx = visit(node->type());
   if(node->nextType()!=NULL){
      LLGenContext tmpCtx = visit(node->nextType());
      if(tmpCtx.type!=nullptr && ctx.type==nullptr){
         ctx.type = tmpCtx.type;
      }
   }
   return ctx;
}

LLGenContext ASTLLGen::visitPrimitiveTypeNode(PrimitiveTypeNode *node){
   LLGenContext ctx;
   ctx.typeSpecifier = node->typeSpecifier();

   switch(node->typeSpecifier()){
   case TypeSpecifier::TYPE_VOID:
      ctx.type = llvm::Type::getVoidTy(Context);
      break;
   case TypeSpecifier::TYPE_CHAR:
      ctx.type = llvm::Type::getInt8Ty(Context);
      break;
   case TypeSpecifier::TYPE_SHORT:
      ctx.type = llvm::Type::getInt16Ty(Context);
      break;
   case TypeSpecifier::TYPE_INT:
      ctx.type = llvm::Type::getInt32Ty(Context);
      break;
   case TypeSpecifier::TYPE_LONG:
      ctx.type = llvm::Type::getInt64Ty(Context);
      break;
   case TypeSpecifier::TYPE_FLOAT:
      ctx.type = llvm::Type::getFloatTy(Context);
      break;
   case TypeSpecifier::TYPE_DOUBLE:
      ctx.type = llvm::Type::getDoubleTy(Context);
      break;
   case TypeSpecifier::TYPE_SIGNED:
   case TypeSpecifier::TYPE_UNSIGNED:
      break;
   case TypeSpecifier::TYPE_BOOL:
      ctx.type = llvm::Type::getInt1Ty(Context);
      break;
   case TypeSpecifier::TYPE_COMPLEX:
   case TypeSpecifier::TYPE_IMAGINARY:
   default:
      break;
   }
   return ctx;
}

LLGenContext ASTLLGen::vistiQualifierTypeNode(QualifierTypeNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitFunctionSpecifierNode(FunctionSpecifierNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitStorageSpecifierNode(StorageSpecifierNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitStructTypeNode(StructTypeNode *node){
   LLGenContext ctx;
   return ctx;
}

LLGenContext ASTLLGen::visitUnionTypeNode(UnionTypeNode *node){
   LLGenContext ctx;
   return ctx;
}

