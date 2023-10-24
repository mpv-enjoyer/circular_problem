#pragma once
#include "type1.h"
#include "type3.h"

class type2
{
    type1& var1;
    int var2;
    type3& var3;
public:
    type2(type1& var1, type3& var3);
    void type2_something();
};