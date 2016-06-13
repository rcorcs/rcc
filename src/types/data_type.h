#ifndef RCC_DATA_TYPE_H
#define RCC_DATA_TYPE_H

enum DataTypeCategory {
   DATA_TYPE_UNDEFINED,
   DATA_TYPE_PRIMITIVE,
   DATA_TYPE_COMPOSED,
   DATA_TYPE_QUALIFIED,
   DATA_TYPE_STORAGE,
   DATA_TYPE_FUNCTION,
   DATA_TYPE_STRUCT,
   DATA_TYPE_UNION,
};

class DataType {
public:
   DataType();
   DataType(DataTypeCategory category);

   DataTypeCategory dataTypeCategory();
private:
   DataTypeCategory _category;
};

#endif
