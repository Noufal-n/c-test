#include<stdio.h>
int main(){


    int limit,i,arr[100],uniqe[100],j;

printf("enter the limit\n");
scanf("%d",&limit);
printf("enter the number ");
for ( i = 0; i < limit; i++)
{
    scanf("%d",&arr[i]);
}

for ( i = 0; i < limit; i++)
{
    for ( j=i+1; j < limit; j++)
    {
        if (arr[i]!=arr[j])
        {
           uniqe[i]=arr[j];
             break;
        }
        
        
    }
    
    
    
}
printf("uniqe number found\n");
for ( i = 0; i < limit; i++)
{
   printf("%d\n", uniqe[i]);
}




}