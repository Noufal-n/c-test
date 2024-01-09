#include <stdio.h>
void main()
{

    int arr[100], i;
    printf("enter the numbers\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("the numbers are\n");
    for (i = 0; i < 10; i++)
    {
    
        printf("%d",arr[i]);
    }
}