#include "scope.h"

Scope::Scope(unsigned int level) {
   _level = level;
}

unsigned int Scope::level(){
   return _level;
}

void Scope::insertIdentifierInfo(IdentifierInformation *identifierInfo) {
   _identifierInfoTab[identifierInfo->identifier()] = identifierInfo;
   _orderedInsertedInfo.push_back(identifierInfo);
}

IdentifierInformation *Scope::findInfoByIdentifier(string id) {
   map<string, IdentifierInformation *>::iterator it = _identifierInfoTab.find(id);
   if(it!=_identifierInfoTab.end()) return it->second;
   else return NULL;
}

