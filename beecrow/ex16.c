#include <stdio.h>

int main()
{
    int par[5];
    int impar[5];
    int t = 15;
    int x;
    int i = 0, j = 0;  
    while (t--)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            par[i] = x;
            i++;
            if (i == 5)
            {
                for (int k = 0; k < 5; k++)  
                {
                    printf("par[%d] = %d\n", k, par[k]);
                }
                i = 0;
            }
        }
        else
        {
            impar[j] = x;
            j++;

            if (j == 5)
            {
                for (int k = 0; k < 5; k++)  
                {
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                j = 0;
            }
        }
    }

    for (int k = 0; k < j; k++) 
    {
        printf("impar[%d] = %d\n", k, impar[k]);
    }
    
    for (int k = 0; k < i; k++)  
    {
        printf("par[%d] = %d\n", k, par[k]);
    }

    return 0;
}
