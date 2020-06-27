#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Counter args = %d\n", argc);
    for (size_t i = 0; i < argc; i++)
    {
        printf("%s \t", argv[i]);
    }

    return 0;
}
