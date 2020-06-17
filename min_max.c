#include <stdio.h>
int main()
{
    int num[] = {10,
                 5,
                 7,
                 20,
                 35,
                 60,
                 50};
    int min = num[0],
        max = num[0];
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
    {
        //Searching min value
        if (num[i] < min)
        {
            min = num[i];
        }
        //Searching max value
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("Min = %d \n", min);
    printf("Max = %d \n", max);

    return 0;
}