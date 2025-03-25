#include <stdio.h>

int main() {
    int x, i, m, p;
    scanf("%d", &x);
    int v[x];
    for (i = 0; i < x; i++) {
        scanf("%d", &v[i]);
    }
    m = v[0];
    p = 0;

    for (i = 1; i < x; i++) { 
        if (v[i] < m) {
            m = v[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", p);
    return 0;
}