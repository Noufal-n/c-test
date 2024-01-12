#include <stdio.h>
int main()
{

    int num[10] = {4, 15, 88, 10, 5,87}, i, j, count = 6+1, large = 0, second_large = 0;

    for (i = 0; i < count; i++)
    {
        if (num[i] > large)
        {
            large = num[i];
            j = i;
        }
    }
        for (i = 0; i < count; i++)
        {
            if (i == j)
            {
             
            }
            else
            {
                if (second_large < num[i])
                {
                    second_large = num[i];
                }
            }
        }
    

    printf("after finding second largest number:%d\n", second_large);

    return 0;
}