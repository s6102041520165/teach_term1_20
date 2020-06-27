#include <stdio.h>

void math(int (*callback)(int), int a)
{
    callback(a);
}

int increase(int a)
{
    for (int i = 1; i <= a; i++)
        printf("%d\n", i);
    return 1;
}

int decrease(int a)
{
    for (int i = 1; i >= (a * -1); i--)
        printf("%d\n", i);
    return 1;
}

int main()
{
    math(increase, 10);
    math(decrease, 10);
    return 1;
}