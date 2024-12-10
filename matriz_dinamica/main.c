#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(void)
{
    int m, n;
    float *v;

    printf("Digite o número de linhas: ");
    scanf("%d", &m);

    printf("Digite o número de colunas: ");
    scanf("%d", &n);

    v = (float *)malloc(m * n * sizeof(float));

    preenche_matriz(m, n, v);
    exibe_matriz(m, n, v);

    free(v);
    return 0;
}
