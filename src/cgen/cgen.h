#ifndef RCC_CGEN_H
#define RCC_CGEN_H

#include "../ast/ast.h"

#include <string>

using std::string;

string typeSpecifierName(TypeSpecifier type);
string typeQualifierName(TypeQualifier type);
string functionSpecifierName(FunctionSpecifier type);
string storageSpecifierName(StorageSpecifier type);

#endif
