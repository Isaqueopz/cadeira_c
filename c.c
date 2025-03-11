#include <stdio.h>
int main(){
    char x;
    int a,b,operation;
    scanf("%d%c%d", &a, &x, &b);
    operation = a*b;
    printf("%d\n",operation);
    return 0;
}