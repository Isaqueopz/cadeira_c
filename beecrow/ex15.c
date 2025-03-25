#include <stdio.h>

int main() {
    int i;
    double x,v[100];
    scanf("%lf",&x);
    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4f\n",i,x);
        x = x/2;
    }
    return 0;
}
