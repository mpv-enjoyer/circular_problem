#pragma once
#include "type1.h"
#include "type2.h"

class type3
{
    type1& var1;
    type2& var2;
    int var3;
public:
    type3(type1& var1, type2& var2);
    void type3_something();
};