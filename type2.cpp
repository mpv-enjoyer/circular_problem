#include "type2.h"

void type2::type2_something()
{
    var2++;
}

type2::type2(type1& var1, type3& var3) : var1(var1), var3(var3)
{
    var2 = 0;
}