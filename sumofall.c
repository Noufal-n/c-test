#include <stdio.h>
int main()
{

    int limit, num[10], i,ans=0;
    printf("enter the limit of numbers\n");
    scanf("%d", &limit);
    printf("enter the numbers\n");

    for (i = 0; i < limit; i++)
    {
        scanf("%d", &num[i]);
    }
   
    for ( i = 0; i < limit; i++)
    {
       ans=ans+num[i];
    }
     printf("sum =%d",ans);
}