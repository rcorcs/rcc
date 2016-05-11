
#include "symbol_table.h"

/**
  Implementação da classe SymbolTable.
*/

/**
  Construtor padrão.
*/
SymbolTable::SymbolTable() { }

/**
  Destrutor da classe.
*/
SymbolTable::~SymbolTable() {
    list<IdentifierInformation*>::const_iterator it = _identifierInfoList.begin();

    while(it != _identifierInfoList.end()){
        // Desaloca objetos de informações (Information) armazenados na Tabela de Símbolos.
        delete (*it);
        
        it++;
    }

    while(!_scopeList.empty()){
        delete popScope();
    }
}

void SymbolTable::pushScope(){
    Scope *scope = new Scope(scopeCount());
    _scopeList.push_back(scope);
}

Scope *SymbolTable::popScope(){
    Scope *scope = _scopeList.back();
    _scopeList.pop_back();

    return scope;
}


/**
  Insere objeto de informação (Information) na Tabela de Símbolos.

  @param info
     objeto de informação (Information) que será inserido na Tabela de Símbolos.

  @see Information
*/
void SymbolTable::insertAtCurrentScope(IdentifierInformation *identiferInfo)
{
    identiferInfo->scopeLevel( scopeCount() );

    _identifierInfoList.push_back(identiferInfo);
    currentScope()->insertIdentifierInfo(identiferInfo);
}

bool SymbolTable::isAtCurrentScope(string id) const {
    return ( currentScope()->findInfoByIdentifier(id) != NULL );
}


IdentifierInformation * SymbolTable::lookup(string id) const {
    IdentifierInformation *identiferInfo = NULL;

    for(list<Scope *>::const_reverse_iterator it = _scopeList.rbegin();  it != _scopeList.rend() && !identiferInfo; it++){
        identiferInfo = (*it)->findInfoByIdentifier(id);
    }

    return identiferInfo;
}

Scope * SymbolTable::currentScope() const {
    return _scopeList.back();
}

unsigned int SymbolTable::scopeCount() const {
    return _scopeList.size();
}

