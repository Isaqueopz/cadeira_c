#include <stdio.h>
int main()
{
    int v[10];
    int i, temp, j;
    printf("Digite os valores do vetor\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&v[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10 - i - 1; j++)
        {
            if (v[j] > v[j+1])
            {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    printf("vetor ordenado: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",v[i]);
    }
    return 0;
}
