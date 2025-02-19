#include <stdio.h>
#include <stdlib.h>

// Declaração das funções auxiliares
void imprimirMensagens(); // em vez de
void imprimirIdade();

int main(int argc, char *argv[]) {
    imprimirMensagens();
    imprimirIdade();
    return 0;
}

// Definição da função que imprime as mensagens
void imprimirMensagens() {
    char var[] = "isaque"; // o I é um char de var, cada letra(índice) é um char
    char *var2 = "isaque";
    printf("Mensagem1, %c\n", var[0]);
    printf("Mensagem2, %s\n", var2);
    printf("Mensagem3\n");
    printf("Mensagem4\n");
    printf("Mensagem5\n");
}

// Definição da função que imprime a idade
void imprimirIdade() {
    int idade = 0;
    printf("Valor inicial da idade %d\n", idade);
}

/*Especificadores de formato:printf
d ou i (números inteiros em base decimal)
X (números inteiros em base hexadecimal)
f (números em ponto flutuante(com casas decimais))
e (números em notação cientifica(com casas decimais))
c (caracteres alfanuméricos(texto))
s (sequência de caracteres alfanúmericos(texto))
*/

/*
\a (toca um bipe)
\b (backspace)
\n (quebra de linha)
\t tabulação horizontal(tab)
\r retorna ao inicio da linha
\o caracter nulo
\v tabulação vertical
*/