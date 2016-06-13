#ifndef RCC_TYPECHECK_H
#define RCC_TYPECHECK_H

#include "../ast/ast.h"
#include "../symtab/symbol_table.h"
#include "../types/data_type.h"
#include "../types/composed_type.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class TypeCheckerContext {
public:
   TypeCheckerContext(){
      _type = NULL;
   }

   void addIdentifier(IdentifierInformation *idInfo){
      _idInfos.push_back(idInfo);
   }
   
   void mergeIdentifiers(TypeCheckerContext ctx){
      for(int i = 0; i<ctx._idInfos.size(); i++){
         _idInfos.push_back(ctx._idInfos[i]);
      }
   }
   
   void bindTypeToIdentifiers(){
      bindTypeToIdentifiers(_type);
   }
   
   void bindTypeToIdentifiers(ComposedType *t){
      for(int i = 0; i<_idInfos.size(); i++){
         IdentifierInformation *idInfo = _idInfos[i];
         DataType *idType = idInfo->type();
         if(idType==NULL) idInfo->type(t);
         else {
            if(idType->dataTypeCategory()==DATA_TYPE_FUNCTION){
               //bind as return type
            }else {
               idInfo->type(new ComposedType(idType, t));
            }
         }
      }
   }

   void composeType(DataType *t){
      if(t->dataTypeCategory()==DATA_TYPE_COMPOSED){
         ComposedType *ct = (ComposedType *)t;
         ComposedType *it = ct;
         while(it->composition()!=NULL){
            it = it->composition();
         }
         it->composition(_type);
         _type = ct;
      }else{
         _type = new ComposedType(t, _type);
      }
   }
   
   ComposedType *type(){
      return _type;
   }
private:
   ComposedType *_type;
   vector<IdentifierInformation *> _idInfos;
};

class TypeChecker {
public:
   TypeChecker();
   
   TypeCheckerContext visit(Node *root);
//EXPRESSION:
   TypeCheckerContext visitIdentifierNode(IdentifierNode *node);
   TypeCheckerContext visitIntegerLiteralNode(IntegerLiteralNode *node);
   TypeCheckerContext visitFloatLiteralNode(FloatLiteralNode *node);
   TypeCheckerContext visitStringLiteralNode(StringLiteralNode *node);
   TypeCheckerContext visitPostUnaryExpressionNode(PostUnaryExpressionNode *node);
   TypeCheckerContext visitPreUnaryExpressionNode(PreUnaryExpressionNode *node);
   TypeCheckerContext visitBinaryExpressionNode(BinaryExpressionNode *node);
   TypeCheckerContext visitConditionalExpressionNode(ConditionalExpressionNode *node);
   TypeCheckerContext visitExpressionListNode(ExpressionListNode *node);
   TypeCheckerContext visitFunctionCallNode(FunctionCallNode *node);
   TypeCheckerContext visitArgumentListNode(ArgumentListNode *node);
   TypeCheckerContext visitArrayReferenceNode(ArrayReferenceNode *node);
   TypeCheckerContext visitCastNode(CastNode *node);
   TypeCheckerContext visitAttributeReferenceNode(AttributeReferenceNode *node);
   TypeCheckerContext visitSizeOfNode(SizeOfNode *node);
//STATEMENT:
   TypeCheckerContext visitBreakNode(BreakNode *node);
   TypeCheckerContext visitContinueNode(ContinueNode *node);
   TypeCheckerContext visitReturnNode(ReturnNode *node);
   TypeCheckerContext visitGotoNode(GotoNode *node);
   TypeCheckerContext visitCompoundStatementNode(CompoundStatementNode *node);
   TypeCheckerContext visitExpressionStatementNode(ExpressionStatementNode *node);
   TypeCheckerContext visitDeclarationStatementNode(DeclarationStatementNode *node);
   TypeCheckerContext visitIfNode(IfNode *node);
   TypeCheckerContext visitForNode(ForNode *node);
   TypeCheckerContext visitWhileNode(WhileNode *node);
   TypeCheckerContext visitDoWhileNode(DoWhileNode *node);
   TypeCheckerContext visitLabeledStatementNode(LabeledStatementNode *node);
   TypeCheckerContext visitSwitchNode(SwitchNode *node);
   TypeCheckerContext visitCaseStatementNode(CaseStatementNode *node);
   TypeCheckerContext visitSkipNode(SkipNode *node);
//DECLARATION:
   TypeCheckerContext visitDeclarationSequenceNode(DeclarationSequenceNode *node);
   TypeCheckerContext visitFunctionDeclarationNode(FunctionDeclarationNode *node);
   TypeCheckerContext visitDeclaratorNode(DeclaratorNode *node);
   TypeCheckerContext visitIdentifierDeclarationNode(IdentifierDeclarationNode *node);
   TypeCheckerContext visitParameterListNode(ParameterListNode *node);
   TypeCheckerContext visitPointerDeclaratorNode(PointerDeclaratorNode *node);
   TypeCheckerContext visitFunctionDeclaratorNode(FunctionDeclaratorNode *node);
   TypeCheckerContext visitParameterDeclarationNode(ParameterDeclarationNode *node);
   TypeCheckerContext visitAssignmentNode(AssignmentNode *node);
   TypeCheckerContext visitVariableDeclarationNode(VariableDeclarationNode *node);
   TypeCheckerContext visitDeclarationSpecifierNode(DeclarationSpecifierNode *node);
   TypeCheckerContext visitDeclarationListNode(DeclarationListNode *node);
   TypeCheckerContext visitAttributeDeclarationNode(AttributeDeclarationNode *node);
   TypeCheckerContext visitAttributeInitializerNode(AttributeInitializerNode *node);
   TypeCheckerContext visitExpressionDeclarationNode(ExpressionDeclarationNode *node);
   TypeCheckerContext visitTypeDeclarationNode(TypeDeclarationNode *node);
   TypeCheckerContext visitArrayDeclarationNode(ArrayDeclarationNode *node);
//TYPE:
   TypeCheckerContext visitTypeCompositionNode(TypeCompositionNode *node);
   TypeCheckerContext visitPrimitiveTypeNode(PrimitiveTypeNode *node);
   TypeCheckerContext vistiQualifierTypeNode(QualifierTypeNode *node);
   TypeCheckerContext visitFunctionSpecifierNode(FunctionSpecifierNode *node);
   TypeCheckerContext visitStorageSpecifierNode(StorageSpecifierNode *node);
   TypeCheckerContext visitStructTypeNode(StructTypeNode *node);
   TypeCheckerContext visitUnionTypeNode(UnionTypeNode *node);
private:
   SymbolTable _symbolTable;
};

#endif
