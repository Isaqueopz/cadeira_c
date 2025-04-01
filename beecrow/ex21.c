#include <stdio.h>

int main() {
    int a;

    while (scanf("%d", &a) != EOF) {
        int matriz[a][a];

        
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                matriz[i][j] = 0;
            }
        }

      
        for (int i = 0; i < a; i++) {
            matriz[i][i] = 2;              
            matriz[i][a - 1 - i] = 3;      
        }

        
        int inicio = a / 3;
        int fim = a - inicio;
        for (int i = inicio; i < fim; i++) {
            for (int j = inicio; j < fim; j++) {
                matriz[i][j] = 1;
            }
        }

        
        matriz[a / 2][a / 2] = 4;

       
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }

        
        printf("\n");
    }

    return 0;
}
