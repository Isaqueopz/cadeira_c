#include <stdio.h>
#include <stdbool.h>

#define MAX 2000000

bool eh_fibonacci(int n) {
    int a = 1, b = 1, c;
    if (n == 1) return true;
    
    while (b <= n) {
        if (b == n) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

int main() {
    int K;
    scanf("%d", &K);

    int count = 0, num = 1;

    while (count < K) {
        if (!eh_fibonacci(num)) {
            count++;
        }
        num++;
    }

    printf("%d\n", num - 1);
    
    return 0;
}
