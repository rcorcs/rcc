#ifndef RCC_STORAGE_TYPE_H
#define RCC_STORAGE_TYPE_H

#include "data_type.h"
#include "storage_specifier.h"

class StorageType : public DataType {
public:
   StorageType(StorageSpecifier specifier);

   StorageSpecifier storageSpecifier();
protected:
   StorageSpecifier _specifier;
};

#endif
