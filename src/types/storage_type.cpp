#include "storage_type.h"

StorageType::StorageType(StorageSpecifier specifier) : DataType(DATA_TYPE_STORAGE) {
   _specifier = specifier;
}

StorageSpecifier StorageType::storageSpecifier(){
   return _specifier;
}

