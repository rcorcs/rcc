#include "cgen.h"

string typeSpecifierName(TypeSpecifier type){
   switch(type){
   case TypeSpecifier::TYPE_VOID: return "void";
   case TypeSpecifier::TYPE_CHAR: return "char";
   case TypeSpecifier::TYPE_SHORT: return "short";
   case TypeSpecifier::TYPE_INT: return "int";
   case TypeSpecifier::TYPE_LONG: return "long";
   case TypeSpecifier::TYPE_FLOAT: return "float";
   case TypeSpecifier::TYPE_DOUBLE: return "double";
   case TypeSpecifier::TYPE_SIGNED: return "signed";
   case TypeSpecifier::TYPE_UNSIGNED: return "unsigned";
   case TypeSpecifier::TYPE_BOOL: return "_Bool";
   case TypeSpecifier::TYPE_COMPLEX: return "_Complex";
   case TypeSpecifier::TYPE_IMAGINARY: return "_Imaginary";
   default: return "";
   }
}

string typeQualifierName(TypeQualifier type){
   switch(type){
   case TypeQualifier::TYPE_CONST: return "const";
   case TypeQualifier::TYPE_RESTRICT: return "restrict";
   case TypeQualifier::TYPE_VOLATILE: return "volatile";
   case TypeQualifier::TYPE_ATOMIC: return "_Atomic";
   default: return "";
   }
}

string functionSpecifierName(FunctionSpecifier type){
   switch(type){
   case FunctionSpecifier::TYPE_INLINE: return "inline";
   case FunctionSpecifier::TYPE_NORETURN: return "_Noreturn";
   default: return "";
   }
}

string storageSpecifierName(StorageSpecifier type){
   switch(type){
   case StorageSpecifier::TYPE_EXTERN: return "extern";
   case StorageSpecifier::TYPE_STATIC: return "static";
   case StorageSpecifier::TYPE_THREAD_LOCAL: return "_Thread_local";
   case StorageSpecifier::TYPE_AUTO: return "auto";
   case StorageSpecifier::TYPE_REGISTER: return "register";
   default: return "";
   }
}


