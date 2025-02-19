#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *var = "isaque";
    printf("Mensagem1, %c\n", var[0]);
    printf("Mensagem2\n");
    printf("Mensagem3\n");
    printf("Mensagem4\n");
    printf("Mensagem5\n");
    return 0;
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


#include <stdio.h>    
int dobra( int ) ;

void main ( void )
    {
    int p ;
    p = dobra( 20 ) ;
    printf ( "%d", p ) ;
    }

int dobra( int q )
    {
    q*=2;
        // Código em Assembly
    asm {
    mov ax, q
    add ax, 10
    pop bp
    ret
    }
}