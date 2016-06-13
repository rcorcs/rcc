#ifndef RCC_SYMTAB_IDENTIFIER_INFORMATION_BUILDER_H
#define RCC_SYMTAB_IDENTIFIER_INFORMATION_BUILDER_H

#include "identifier_information.h"

#include "variable_information.h"
#include "function_information.h"
#include "struct_information.h"
#include "union_information.h"

#include <string>
#include <list>
using std::string;
using std::list;

class IdentifierInformationBuilder {
public:
   IdentifierInformationBuilder();

   // Getters/setters.
   //string identifier();
   //IdentifierInformationBuilder *identifier(string id);
   IdentifierInformationBuilder *addIdentifier(string id);
   
   string dataType();
   IdentifierInformationBuilder *dataType(string type);

   string idType();
   IdentifierInformationBuilder *idType(string type);

   IdentifierInformation *build();
private:
   //string _id;
   list<string> _ids;
   string _dataType;
   string _idType;
};

#endif
