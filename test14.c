#include <stdio.h>
int main()
{
    int num[10] = {1, 2, 3, 4, 5}, count = 5,i,remove=1,temp,p;

for ( i = 0; i < count; i++)
{
    if (num[i]==remove)
    {
        
        p=i;
        
        break;

    }
    
}

while ( count > p)
{
    num[p]=num[p+1];
    p++;
}

printf("after delection:\n");
    for (i = 0; i < count-1; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}