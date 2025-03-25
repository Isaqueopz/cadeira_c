#include <stdio.h>
int main() {
    int a, i;
    int v[1000];

    scanf("%d", &a);

    for (i = 0; i < 1000; i++) {  
        v[i] = i % a; 
        printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}