#include "data_type.h"

DataType::DataType(){
   _category = DATA_TYPE_UNDEFINED;
}

DataType::DataType(DataTypeCategory category){
   _category = category;
}

DataTypeCategory DataType::dataTypeCategory(){
   return _category;
}

