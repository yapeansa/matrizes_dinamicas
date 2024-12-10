#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
    int m, n;
    float **mat;

    printf("Digite o número de linhas: ");
    scanf("%d", &m);
    printf("Digite o número de colunas: ");
    scanf("%d", &n);

    mat = (float **)malloc(m * sizeof(float *));

    for (int i = 0; i < m; i++)
        mat[i] = (float *)malloc(n * sizeof(float));

    preenche(m, n, mat);
    printf("Matriz:\n");
    exibe_matriz(m, n, mat);

    for (int i = 0; i < m; i++)
        free(mat[i]);

    free(mat);

    return 0;
}
