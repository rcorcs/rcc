#include "function_type.h"

FunctionType::FunctionType() : DataType(DATA_TYPE_FUNCTION) {

}

void FunctionType::addFunctionSpecifier(FunctionSpecifier specifier){
   _specifiers.insert(specifier);
}

void FunctionType::removeFunctionSpecifier(FunctionSpecifier specifier){
   _specifiers.erase(specifier);
}
