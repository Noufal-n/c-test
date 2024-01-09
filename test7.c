#include <stdio.h>
int main()
{

    int i, j, num1[100], num2[100], num3[100], temp, limit1 = 3, limit2 = 3;

    printf("enter the numbers first array\n");
    for (i = 0; i < limit1; i++)
    {
        scanf("%d", &num1[i]);
    }
    printf("enter the numbers second  array\n");

    for (i = 0; i < limit2; i++)
    {
        scanf("%d", &num2[i]);
    }
    int limit3 = limit1 + limit2;

    for (i = 0; i < limit1; i++)
    {
        num3[i] = num1[i];
    }
    for (i = 0, j = limit1; j < limit3 && i < limit2; i++, j++)
    {
        num3[j] = num2[i];
    }

    for ( i = 0; i < limit3; i++)
    {
        if (num3[i]<=num3[i+1])
        {
            temp=num3[i+1];
            num3[i+1]=num3[i];
            num3[i]=temp;
        }
        
        
    }
    

    printf("merged array\n");
    for (i = 0; i < limit3; i++)
    {
        printf("%d\n", num3[i]);
    }

    return 0;
}