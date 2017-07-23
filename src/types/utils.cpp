unsigned countPointers(DataType *dt){
  unsigned count = 0;
  if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_COMPOSED){
     ComposedType *composedTy = (ComposedType*)dt;
     while(composedTy==nullptr){
        if(composedTy->type()->dataTypeCategory()==DataTypeCategory::DATA_TYPE_POINTER)
           count++;
        composedTy = composedTy->composition();
     }
  }else if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_POINTER)
     count++;
  return count;
}

bool isPointerType(DataType *dt){
   return (countPointers(dt)>0);
}

bool isUnsignedType(DataType *dt){
  if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_COMPOSED){
     ComposedType *composedTy = (ComposedType*)dt;
     while(composedTy->type()->dataTypeCategory()!=DataTypeCategory::DATA_TYPE_POINTER){
        if(composedTy->composition()==nullptr)break;
        if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_PRIMITIVE){
           if(((PrimitiveType*)dt)->typeSpecifier()==TypeSpecifier::TYPE_UNSIGNED)
              return true;
        }
        composedTy = composedTy->composition();
     }
  }else if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_PRIMITIVE){
     return (((PrimitiveType*)dt)->typeSpecifier()==TypeSpecifier::TYPE_UNSIGNED);
  }
  return false;
}

bool hasStorageSpecifier(DataType *dt, StorageSpecifier specifier){
  if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_COMPOSED){
     ComposedType *composedTy = (ComposedType*)dt;
     while(composedTy->type()->dataTypeCategory()!=DataTypeCategory::DATA_TYPE_POINTER){
        if(composedTy->composition()==nullptr)break;
        if(composedTy->dataTypeCategory()==DataTypeCategory::DATA_TYPE_STORAGE){
           if(((StorageType*)dt)->storageSpecifier()==specifier)
              return true;
           composedTy = composedTy->composition();
           continue;
        }
        break;
     }
  }
  return false;
}

bool hasTypeQualifier(DataType *dt,TypeQualifier qualifier){
  if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_COMPOSED){
     ComposedType *composedTy = (ComposedType*)dt;
     while(composedTy->type()->dataTypeCategory()!=DataTypeCategory::DATA_TYPE_POINTER){
        if(composedTy->composition()==nullptr)break;
        if(composedTy->dataTypeCategory()==DataTypeCategory::DATA_TYPE_STORAGE){
           composedTy = composedTy->composition();
           continue;
        }
        if(dt->dataTypeCategory()==DataTypeCategory::DATA_TYPE_QUALIFIED){
           if(((QualifiedType*)dt)->qualifier()==qualifier)
              return true;
           composedTy = composedTy->composition();
           continue;
        }
        break;
     }
  }
  return false;
}

bool isConst(DataType *dt){
  return hasTypeQualifier(dt,TypeQualifier::CONST);
}

bool areCastableTypes(DataType *ty1, DataType *ty2){
   return true;
}
