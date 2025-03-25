#include <stdio.h>
int main()
{
    int i,count,j;
    float v[100];
    for ( i = 0; i <100; i++)
    {
        scanf("%f",&v[i]);   
    }
    for ( j = 0; j < 100; j++)
    {
        if (v[j] <= 10)
        {
            printf("A[%d] = %.1f\n",j,(float) v[j]);
        }
    }
    return 0;
}
