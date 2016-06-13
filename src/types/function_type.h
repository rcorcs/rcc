#ifndef RCC_FUNCTION_TYPE_H
#define RCC_FUNCTION_TYPE_H

#include "data_type.h"
#include "function_specifier.h"

#include <set>

using std::set;

class FunctionType : public DataType {
public:
   FunctionType();

   
   void addFunctionSpecifier(FunctionSpecifier specifier);
   void removeFunctionSpecifier(FunctionSpecifier specifier);
   
protected:

   set<FunctionSpecifier> _specifiers;
};

#endif
