#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3 

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Insira os dados (%d):\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", lista[i].nome); // Corrigido para evitar problemas no buffer

        printf("Idade: ");
        while (scanf("%d", &lista[i].idade) != 1) {
            printf("Entrada inválida. Insira um número inteiro: ");
            while (getchar() != '\n'); // Limpa buffer
        }

        printf("Peso: ");
        while (scanf("%f", &lista[i].peso) != 1) {
            printf("Entrada inválida. Insira um número decimal: ");
            while (getchar() != '\n'); // Limpa buffer
        }

        while (getchar() != '\n'); // Limpa buffer após a última entrada
    }
    
    system("clear");
    // Exibir os dados inseridos
    printf("\nDados inseridos:\n");
    printf("---------------------\n");
    for (i = 0; i < TAM; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
        printf("---------------------\n");
    }
    return 0;
}
