#include <stdio.h>
void main()
{

    int count = 7, num[10] = {14, 55, 88, 11, 4, 15, 27, 53}, i, temp=0, j;

    for (i = 0; i < count; i++)
    {
        for (j =i+1; j <count; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    printf("accent  numbers:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\n", num[i]);
    }
}