#include "ast_visitor.h"

#include <iostream>

using std::cout;
using std::endl;

void ASTVisitor::visit(Node *root){
   if(root==NULL) return;
   switch(root->nodeType()){
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
   case NODE_TYPE_TYPE_COMPOSITION:
      visitTypeCompositionNode((TypeCompositionNode *)root);
      break;
   case NODE_TYPE_PRIMITIVE_TYPE:
      visitPrimitiveTypeNode((PrimitiveTypeNode *)root);
      break;
   default:
      cout << "Unknown node type." << endl;
   }
}

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


void ASTVisitor::visitTypeCompositionNode(TypeCompositionNode *node){
   cout << "Visiting TypeCompositionNode" << endl;
   visit(node->type());
   visit(node->nextType());
}

void ASTVisitor::visitPrimitiveTypeNode(PrimitiveTypeNode *node){
   cout << "Visiting PrimitiveTypeNode" << endl;
   switch(node->typeSpecifier()){
   case TypeSpecifier::TYPE_VOID:
      cout << "Type: " << "void" << endl;
      break;
   case TypeSpecifier::TYPE_CHAR:
      cout << "Type: " << "char" << endl;
      break;
   case TypeSpecifier::TYPE_SHORT:
      cout << "Type: " << "short" << endl;
      break;   
   case TypeSpecifier::TYPE_INT:
      cout << "Type: " << "int" << endl;
      break;
   case TypeSpecifier::TYPE_LONG:
      cout << "Type: " << "long" << endl;
      break;
   case TypeSpecifier::TYPE_FLOAT:
      cout << "Type: " << "float" << endl;
      break;
   case TypeSpecifier::TYPE_DOUBLE:
      cout << "Type: " << "double" << endl;
      break;
   case TypeSpecifier::TYPE_SIGNED:
      cout << "Type: " << "signed" << endl;
      break;
   case TypeSpecifier::TYPE_UNSIGNED:
      cout << "Type: " << "unsigned" << endl;
      break;
   case TypeSpecifier::TYPE_BOOL:
      cout << "Type: " << "_Bool" << endl;
      break;
   case TypeSpecifier::TYPE_COMPLEX:
      cout << "Type: " << "_Complex" << endl;
      break;
   case TypeSpecifier::TYPE_IMAGINARY:
      cout << "Type: " << "_Imaginary" << endl;
      break;
   default:
      cout << "Unknown primitive type." << endl;
   }
}
