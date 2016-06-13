#ifndef RCC_SYMBOL_TABLE_H
#define RCC_SYMBOL_TABLE_H

//#include "idinfos/identifier_information_builder.h"

#include "identifier_information.h"
/*#include "idinfos/variable_information.h"
#include "idinfos/function_information.h"
#include "idinfos/struct_information.h"
#include "idinfos/union_information.h"*/
#include "scope.h"


#include <string>
#include <list>
using std::string;
using std::list;

/**

  Definição da classe utilizada para implementar uma Tabela de Símbolos.

  Esta tabela será consultada e modificada inicialmente pela função externa yy_parser(), gerada
  pelo Bison no arquivo yy_parser.cpp, que irá detectar e extrair informações sobre
  uso/declaração de identificadores e inserir, nest tabela, informações relevantes,
  como, por exemplo, tipos de variáveis e de retornos de funções.

  Terminando sua execução, o Parser fornecerá, junto com a Árvore de Sintaxe Abstrata,
  esta tabela com as informações necessárias ao analisador semântico.

*/

class SymbolTable {
public:
   SymbolTable();
   ~SymbolTable();
   
   // Criação e remoção de escopos.
   void pushScope();
   Scope *popScope();

   // Insere informação sobre identificador em um escopo corrente.
   void insertAtCurrentScope(IdentifierInformation *identiferInfo);

   // Verifica presença de informação sobre identificador em um escopo corrente.
   bool isAtCurrentScope(string id) const;

   // Verifica presença de informação sobre identificador em todos os escopos empilhados.
   IdentifierInformation *lookup(string id) const;

   // Escopo atual/quantidade de escopos empilhados.
   Scope *currentScope() const;
   unsigned int scopeCount() const;
private:
    list<IdentifierInformation *> _identifierInfoList;
    list<Scope *> _scopeList;
};

#endif
