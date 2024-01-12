#include <stdio.h>
int main()
{

    int num[10] = {4, 15, 88, 10, 5, 87}, i = 0, j, count = 6, small = num[0], second_small = 9999;

    for (i = 0; i < count; i++)
    {
        if (num[i] <= small)
        {
            small = num[i];
            j = i;
        }
    }

    for (i = 0; i < count; i++)
    {
        if (i == j)
        {
            i++;
            i--;
        }
        else
        {
            if (second_small > num[i])
            {
                second_small = num[i];
            }
        }
    }

    printf("after finding second largest number:%d\n", second_small);

    return 0;
}