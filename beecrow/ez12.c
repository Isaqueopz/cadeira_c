#include <stdio.h>

int main()
{
    int v[7] = {100, 50, 20, 10, 5, 2, 1}; 
    int valor;
    int valorAtt;
    int i;
    
    scanf("%d", &valor);
    valorAtt = valor;
    
    printf("%d\n", valor);
    for (i = 0; i < 7; i++) 
    {
        int count = 0; 

        while (valorAtt >= v[i]) 
        {
            count++;
            valorAtt -= v[i]; 
        }


        printf("%d nota(s) de R$ %d,00\n", count, v[i]);
    }

    return 0;
}
