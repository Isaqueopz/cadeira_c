#include <stdio.h>
void calcular_area(double* area, double raio) { 
    *area =  3.14159*(raio * raio);
}
int main() {
    double area; 
    double raio;
    scanf("%lf", &raio);
    calcular_area(&area, raio);
    printf("A=%.4f\n", area);
    return 0;
}


//DOUBLE TEM MELHOR UTILIZAÇÃO QUANDO É REQUISITADO MAIS PRECISÃO DO VALOR 