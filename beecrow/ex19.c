#include <stdio.h>
#include <string.h>
#define MAX 1000
int main() {
    int q, i, c, tam;
    char ch;
    scanf("%d", &q);
    getchar();  
    while (q--) {
        int letras[26] = {0}; 
        c = 0;  
        while ((ch = getchar()) != '\n' && ch != EOF) {
            if (ch >= 'a' && ch <= 'z') {
                int index = ch - 'a';  
                if (!letras[index]) {  
                    letras[index] = 1;  
                    c++;  
                }
            }
        }
        if (c == 26) {
            printf("frase completa\n");
        } else if (c >= 13) {  
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        }
    }
    return 0;
}
