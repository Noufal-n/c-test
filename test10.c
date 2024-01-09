#include <stdio.h>
void main()
{

    int count = 7, num[10] = {14, 55, 88, 11, 4, 15, 27, 53}, i, odd[100], even[100],e=0,o=0;

    for (i = 0; i < count; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[e] = num[i];
            e++;
        }
        else
        {
            odd[o] = num[i];
            o++;
        }
    }
    printf("even numbers:\n");
    for (i = 0; i < e; i++)
    {
        printf("%d \n", even[i]);
    }
    printf("odd numbers:\n");
    for (i = 0; i < o; i++)
    {
        printf("%d \n", odd[i]);
    }
}