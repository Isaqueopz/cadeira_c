#include <stdio.h>
int main(){
    int value_analitic, value_desire, i, divisor, soma;
    scanf("%d", &value_desire);
    for (i = 0; i < value_desire; i++){
        scanf("%d", &value_analitic);
        soma = 0;
        divisor = 1;
       while (divisor < value_analitic) { 
            if (value_analitic % divisor == 0) {
                soma += divisor;
            }
            divisor++;
        }
        if (value_analitic == soma)
        {
            printf("%d eh perfeito\n", value_analitic);
        }
        else
        {
            printf("%d não eh perfeito \n", value_analitic);
        }
    }
    return 0;
}