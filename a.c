#include <stdio.h>

int main()
{
    int a, b, c, v[3], temp, i, j;
    scanf("%d %d %d", &a, &b, &c);
    v[0] = a; // 312
    v[1] = b; // 41231
    v[2] = c; // 12
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    printf("Valores ordenados: %d %d %d\n", v[0], v[1], v[2]);
    return 0;
}
