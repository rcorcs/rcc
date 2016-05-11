#include "declaration_statement_node.h"

DeclarationStatementNode::DeclarationStatementNode(DeclarationNode *decl)
   : StatementNode(NODE_TYPE_DECLARATION_STATEMENT) {
   _decl = decl;
}
DeclarationNode *DeclarationStatementNode::declaration(){
   return _decl;
}

