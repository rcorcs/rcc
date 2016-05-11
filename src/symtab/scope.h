
#ifndef RCC_SCOPE_H
#define RCC_SCOPE_H

#include "identifier_information.h"


#include <string>
#include <list>
#include <map>
using std::string;
using std::list;
using std::map;

/**
  Definição da classe utilizada para representar um escopo de um programa.
*/
class Scope {
public:
    Scope(unsigned int level);
    unsigned int level();
    void insertIdentifierInfo(IdentifierInformation *identifierInfo);
    IdentifierInformation *findInfoByIdentifier(string id);
private:
   unsigned int _level;
   map<string, IdentifierInformation *> _identifierInfoTab;
   list<IdentifierInformation *> _orderedInsertedInfo;
};

#endif
