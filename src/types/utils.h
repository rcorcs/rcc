#ifndef RCC_TYPE_UTILS_H
#define RCC_TYPE_UTILS_H

#include "../types/data_type.h"
#include "../types/composed_type.h"
#include "../types/function_type.h"
#include "../types/primitive_type.h"
#include "../types/qualified_type.h"
#include "../types/storage_type.h"
#include "../types/storage_type.h"
#include "../types/pointer_type.h"

bool areCastableTypes(DataType *ty1, DataType *ty2);

#endif
