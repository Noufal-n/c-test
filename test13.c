#include <stdio.h>
int main()
{

    int num[10] = {44, 25, 8, 7, 5}, count = 5, i, new = 100, j, temp;

    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        if (num[i] > new)
        {
            temp = i;
            break;
        }
        else
        {
            temp = i + 1;
        }
    }

    for (i = count + 1; i > temp; i--)
    {
        num[i] = num[i - 1];
    }
    num[temp] = new;

        printf("after insertion:\n");
    for (i = 0; i <= count; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}