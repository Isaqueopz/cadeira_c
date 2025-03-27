#include <stdio.h>
#include <string.h>
#define MAX 1000  
#define MAX_LEN 80  
int main() {
    char nomes[MAX][MAX_LEN];  
    int n = 0;  
    while (fgets(nomes[n], MAX_LEN, stdin) != NULL) {  
        nomes[n][strcspn(nomes[n], "\n")] = '\0';  
        n++;  
    }
    int ultimo = 0; 
    for (int i = 1; i < n; i++) {
        if (strcasecmp(nomes[i], nomes[ultimo]) > 0) {
            ultimo = i;  
        }
    }
    printf("%s\n", nomes[ultimo]);
    return 0;
}
