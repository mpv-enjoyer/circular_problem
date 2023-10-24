#pragma once
#include "type2.h"
#include "type3.h"

class type1
{
    int var1;
    type2& var2;
    type3& var3;
public:
    type1(type2& var2, type3& var3);
    void type1_something();
};