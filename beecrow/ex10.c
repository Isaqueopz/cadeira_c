#include <stdio.h>

int main() {
    int B, T;
    scanf("%d", &B);
    scanf("%d", &T);
    int largura = 160;
    int altura = 70;
    int area_esquerda = ((B + T) * altura) / 2;
    int area_total = largura * altura;
    if (area_esquerda > area_total / 2) {
        printf("1\n"); 
    } else if (area_esquerda < area_total / 2) {
        printf("2\n"); 
    } else {
        printf("0\n"); 
    }  
    return 0;
}
