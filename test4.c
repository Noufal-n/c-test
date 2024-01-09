#include <stdio.h>
int main()
{

    int arr1[100], arr2[200], limit, i;
    printf("enter the number of limits\n");
    scanf("%d", &limit);
    printf("enter the numbers\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < limit; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("the values in the second array\n");
    for ( i = 0; i < limit; i++)
    {
        printf("%d\n",arr2[i]);
    }
    
}