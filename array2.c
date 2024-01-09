#include <stdio.h>

void main()
{

    int array[100], i = 0, limit, arr1[100], temp;

    printf("Input the number of elements to store in the array\n");
    scanf("%d", &limit);
    printf("enter the numbers\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("the reversed array is \n");

    for (i = limit-1; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }
}
