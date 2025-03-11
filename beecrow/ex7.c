#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenação crescente
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // Ler os identificadores dos duendes e armazenar no array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ordena o array
    qsort(a, n, sizeof(int), comparar);

    int maior = a[n - 1]; // Último elemento do array ordenado (maior número)

    // Gerar a lista ns
    int *ns = (int *)malloc(500 * sizeof(int)); // Tamanho arbitrário, suficiente para o intervalo
    if (ns == NULL) {
        printf("Erro de alocação de memória!\n");
        free(a);
        return 1;
    }

    int ns_size = 0;
    for (int i = 1; i < n && i < 20; i++) { // Pegamos os primeiros 20 elementos, descartando o primeiro
        int x = a[i];
        for (int y = ((maior / x) + 1) * x; y <= maior + 500; y += x) {
            ns[ns_size++] = y;
        }
    }

    // Ordena o array ns
    qsort(ns, ns_size, sizeof(int), comparar);

    // Processo de busca do anfitrião
    int m = maior + 1;
    int idx = 0;
    while (ns_size > 1 && idx < ns_size && m >= ns[idx]) {
        if (m == ns[idx]) {
            m++;
        }
        idx++;
    }

    // Imprime o resultado (o duende anfitrião)
    printf("%d\n", m);

    // Liberar memória alocada
    free(a);
    free(ns);

    return 0;
}
