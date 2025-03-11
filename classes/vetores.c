#include <stdio.h>

int main() {
    int v[5];
    float s = 0;

    // Lê os valores e calcula a soma em um único loop
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        s += v[i];
    }

    // Calcula e imprime a média
    printf("Resultado: %.2f\n", s / 5);
    return 0;
} 

