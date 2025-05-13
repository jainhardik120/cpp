#include <stdio.h>

void fun(int a, int b)
{
    printf("Called from shared library : a = %d, b = %d\n", a, b);
}