#include <stdio.h>
int main()
{

    int num[10] = {14, 55, 88, 1100, 4, 1, 2, 56}, i, max, count = 7, min;
    for (i = 0; i < count; i++)
    {
        if (num[i] > max)

        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("max: %d\n", max);
    printf("min: %d\n", min);
    return 0;
}