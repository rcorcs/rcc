#include "composed_type.h"

ComposedType::ComposedType(DataType *type, ComposedType *composition) : DataType(DATA_TYPE_COMPOSED) {
   _type = type;
   _composition = composition;
}

DataType *ComposedType::type(){
   return _type;
}
void ComposedType::type(DataType *t){
   _type = t;
}



ComposedType *ComposedType::composition(){
   return _composition;
}

void ComposedType::composition(ComposedType *composition){
   _composition = composition;
}
