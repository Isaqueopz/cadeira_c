#include <stdio.h>
int main()
{
    char s[10];

    scanf("%9[^\n]s",s); //isso é uma forma de digitar string utilizando de espaços e limitando caracteres 
    return 0;
}

// gets -> para pegar uma string  (não controla limite de tam de vetor)
// fgets -> fgets(<string>,<tam>,stdin);
// -stdin : entrade de dados padrão 
// puts -> consigo imprimir uma string na tela puts(<string>)
// fflush(stdin) -> server para evitar que o lixo de memória afete o proximo scanf


// STRING.H 
// strcpy (<Destino>,<Origem>); = altera o conteudo da string de forma direta
// strcat (<Destino>,<Origem>); = Cola um nome em outro 
// strlen (<String>); = tamanho da string
// strcmp (<String1>,<String2>); = Se a string 1 for totalmente igual a string 2, return 0