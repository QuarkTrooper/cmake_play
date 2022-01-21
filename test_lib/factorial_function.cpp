
#include "factorial_function.h"

int facu(int a)
{
    if(a <= 2)
    {
        return a;
    }
    else
    {
        return a * facu(a - 1);
    }
}