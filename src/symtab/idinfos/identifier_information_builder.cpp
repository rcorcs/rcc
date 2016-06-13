#include "identifier_information_builder.h"

IdentifierInformationBuilder::IdentifierInformationBuilder(){
}
/*
string IdentifierInformationBuilder::identifier(){
   return _id;
}

IdentifierInformationBuilder *IdentifierInformationBuilder::identifier(string id){
   _id = id;
   return this;
}
*/
IdentifierInformationBuilder *IdentifierInformationBuilder::addIdentifier(string id){
   _ids.push_back(id);
   return this;
}
   
string IdentifierInformationBuilder::dataType(){
   return _dataType;
}

IdentifierInformationBuilder *IdentifierInformationBuilder::dataType(string type){
   _dataType = type;
   return this;
}

string IdentifierInformationBuilder::idType(){
   return _idType;
}

IdentifierInformationBuilder *IdentifierInformationBuilder::idType(string type){
   _idType = type;
   return this;
}

IdentifierInformation *IdentifierInformationBuilder::build(){
   if(_ids.size()==0) return NULL;
   
   VariableInformation *varInfo = new VariableInformation();
   varInfo->identifier(_ids.front());
   _ids.pop_front();
   return varInfo;
}

