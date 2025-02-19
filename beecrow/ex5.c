#include <stdio.h> 

#define texto "Entrada e saida de dados."

int main(){
    
    printf("%s\n",texto);

    int idade;
    float altura;
    char nome[50];

    printf("Digite a idade:\n");
    scanf("%d",&idade);
    printf("Digite a altura:\n");
    scanf("%f",&altura);
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    
    printf("A idade é de %d anos\n",idade);
    printf("A altura é de %.2f metros\n",altura);
    printf("Seu nome é %s \n",nome);
    
} 