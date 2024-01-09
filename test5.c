#include<stdio.h>
int main(){


    int limit,i,arr[100],count=0,j;

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
        if (arr[i]==arr[j])
        {
            count=count+1;
             break;
        }
        
        
    }
    
    
    
}

printf("total number of duplicates found=%d\n",count);


}