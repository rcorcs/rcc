#ifndef RCC_AST_LLGEN_H
#define RCC_AST_LLGEN_H

#include "../ast/ast.h"

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/Verifier.h>
/*
#include <llvm/IR/DiagnosticInfo.h>
#include <llvm/IRReader/IRReader.h>
#include <llvm/Support/SourceMgr.h>
#include <llvm/Bitcode/ReaderWriter.h>
*/
#include "llvm/Support/FileSystem.h"

#include "llvm/Support/raw_ostream.h"

#include <vector>
#include <string>

using std::vector;
using std::string;

class LLGenContext {
   LLGenContext(){
      value = nullptr;
      type = nullptr;
   }
private:
   std::string str;

   llvm::Value *value;
   llvm::Type *type;
   TypeSpecifier typeSpecifier;

   vector< llvm::Type *> paramTy;
   vector< string > paramName;

   llvm::BasicBlock *BB;

   friend class ASTLLGen;
};

class ASTLLGen {
public:
   ASTLLGen(char *moduleName);
   LLGenContext visit(Node *root);
//EXPRESSION:
   LLGenContext visitIdentifierNode(IdentifierNode *node);
   LLGenContext visitIntegerLiteralNode(IntegerLiteralNode *node);
   LLGenContext visitFloatLiteralNode(FloatLiteralNode *node);
   LLGenContext visitStringLiteralNode(StringLiteralNode *node);
   LLGenContext visitPostUnaryExpressionNode(PostUnaryExpressionNode *node);
   LLGenContext visitPreUnaryExpressionNode(PreUnaryExpressionNode *node);
   LLGenContext visitBinaryExpressionNode(BinaryExpressionNode *node);
   LLGenContext visitConditionalExpressionNode(ConditionalExpressionNode *node);
   LLGenContext visitExpressionListNode(ExpressionListNode *node);
   LLGenContext visitFunctionCallNode(FunctionCallNode *node);
   LLGenContext visitArgumentListNode(ArgumentListNode *node);
   LLGenContext visitArrayReferenceNode(ArrayReferenceNode *node);
   LLGenContext visitCastNode(CastNode *node);
   LLGenContext visitAttributeReferenceNode(AttributeReferenceNode *node);
   LLGenContext visitSizeOfNode(SizeOfNode *node);
//STATEMENT:
   LLGenContext visitBreakNode(BreakNode *node);
   LLGenContext visitContinueNode(ContinueNode *node);
   LLGenContext visitReturnNode(ReturnNode *node);
   LLGenContext visitGotoNode(GotoNode *node);
   LLGenContext visitCompoundStatementNode(CompoundStatementNode *node);
   LLGenContext visitExpressionStatementNode(ExpressionStatementNode *node);
   LLGenContext visitDeclarationStatementNode(DeclarationStatementNode *node);
   LLGenContext visitIfNode(IfNode *node);
   LLGenContext visitForNode(ForNode *node);
   LLGenContext visitWhileNode(WhileNode *node);
   LLGenContext visitDoWhileNode(DoWhileNode *node);
   LLGenContext visitLabeledStatementNode(LabeledStatementNode *node);
   LLGenContext visitSwitchNode(SwitchNode *node);
   LLGenContext visitCaseStatementNode(CaseStatementNode *node);
   LLGenContext visitSkipNode(SkipNode *node);
//DECLARATION:
   LLGenContext visitDeclarationSequenceNode(DeclarationSequenceNode *node);
   LLGenContext visitFunctionDeclarationNode(FunctionDeclarationNode *node);
   LLGenContext visitDeclaratorNode(DeclaratorNode *node);
   LLGenContext visitIdentifierDeclarationNode(IdentifierDeclarationNode *node);
   LLGenContext visitParameterListNode(ParameterListNode *node);
   LLGenContext visitPointerDeclaratorNode(PointerDeclaratorNode *node);
   LLGenContext visitFunctionDeclaratorNode(FunctionDeclaratorNode *node);
   LLGenContext visitParameterDeclarationNode(ParameterDeclarationNode *node);
   LLGenContext visitAssignmentNode(AssignmentNode *node);
   LLGenContext visitVariableDeclarationNode(VariableDeclarationNode *node);
   LLGenContext visitDeclarationSpecifierNode(DeclarationSpecifierNode *node);
   LLGenContext visitDeclarationListNode(DeclarationListNode *node);
   LLGenContext visitAttributeDeclarationNode(AttributeDeclarationNode *node);
   LLGenContext visitAttributeInitializerNode(AttributeInitializerNode *node);
   LLGenContext visitExpressionDeclarationNode(ExpressionDeclarationNode *node);
   LLGenContext visitTypeDeclarationNode(TypeDeclarationNode *node);
   LLGenContext visitArrayDeclarationNode(ArrayDeclarationNode *node);
//TYPE:
   LLGenContext visitTypeCompositionNode(TypeCompositionNode *node);
   LLGenContext visitPrimitiveTypeNode(PrimitiveTypeNode *node);
   LLGenContext vistiQualifierTypeNode(QualifierTypeNode *node);
   LLGenContext visitFunctionSpecifierNode(FunctionSpecifierNode *node);
   LLGenContext visitStorageSpecifierNode(StorageSpecifierNode *node);
   LLGenContext visitStructTypeNode(StructTypeNode *node);
   LLGenContext visitUnionTypeNode(UnionTypeNode *node);

   void dump(){ if(M) M->dump(); }
   void writeAssembly(std::string filename){
      std::error_code EC;
      llvm::raw_fd_ostream OS(filename, EC, llvm::sys::fs::F_None);
      M->print(OS,nullptr);
      OS.flush();
   }
/*
   void writeBitcode(std::string filename){
      std::error_code EC;
      llvm::raw_fd_ostream OS(filename, EC, llvm::sys::fs::F_None);
      llvm::WriteBitcodeToFile(M, OS);
      OS.flush();
   }
*/
private:
   llvm::LLVMContext Context;
   llvm::IRBuilder<> *Builder;
   llvm::Module *M;
   llvm::Function *F;
   llvm::Type *type;
};

#endif
