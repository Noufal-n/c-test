#include <stdio.h>

int main()
{

    int num[3][3], i, count = 3, j;

    printf("enter the numbers to array");

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf("enter the number to the array possition[%d][%d]", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    for (i = 0; i < count; i++)
    {
        printf("\n");

        for (j = 0; j < count; j++)
        {
            printf("%d\t",num[i][j]);
        }
    }
    return 0;
}