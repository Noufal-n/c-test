#include <stdio.h>
int main()
{

    int num[10] = {5, 6, 5, 8}, i, j, frq[10] = {-1, -1, -1, -1};

    for (i = 0; i < 3; i++)
    {
        int count = 1;
        for (j = i + 1; j < 3; j++)
        {

            if (num[i] == num[j])
            {
                count++;
                frq[j] = 0;
            }
        }
        if (frq[i] != 0)
        {
            frq[i] = count;
        }
    }

    for (i = 0; i < 3; i++)
    {
        if (frq[i] != 0)
        {
            printf("%d occurs %d times\n", num[i], frq[i]);
        }
    }
}