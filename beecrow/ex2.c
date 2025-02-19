#include <stdio.h>
void soma (int* num, int a, int b){
    *num = a + b;
}
int main() {

    int num, a, b;
    scanf("%d %d", &a, &b);
    soma(&num, a,b );
    printf("X = %d\n", num);
    return 0;
}