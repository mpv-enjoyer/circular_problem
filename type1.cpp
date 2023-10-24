#include "type1.h"

void type1::type1_something()
{
    var1++;
}

type1::type1(type2& var2, type3& var3) : var2(var2), var3(var3)
{
    var1 = 0;
}