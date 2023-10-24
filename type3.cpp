#include "type3.h"

void type3::type3_something()
{
    var3++;
}

type3::type3(type1& var1, type2& var2) : var1(var1), var2(var2)
{
    var3 = 0;
}