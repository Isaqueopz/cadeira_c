#include <stdio.h>
int operacao_soma(int a, int b){
    return a + b;
}
int main(){
    int a,b,soma;
    scanf("%d",&a);
    scanf("%d",&b);
    soma = operacao_soma(a, b);
    printf("SOMA = %i\n",soma);
    return 0;
}

//FUNÇÃO EM C 

// Quando uma função é declarada com void, significa que ela não retorna nenhum valor. 

// você deve especificar o tipo de retorno antes do nome da função

// Função que retorna um valor	int soma(int a, int b);
// Função sem retorno	void mensagem();
// Função sem parâmetros	void funcao(void);
// Função com ponteiros	void dobrar(int* x);
// Função retornando struct	Ponto criarPonto(int a, int b);
// Função declarada antes do main()	int soma(int a, int b); (declarada antes, definida depois)