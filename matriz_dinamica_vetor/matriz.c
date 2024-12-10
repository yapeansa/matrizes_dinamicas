#include <stdio.h>
#include "matriz.h"

void preenche(int m, int n, float **mat)
{
    for (int i = 0; i < m; i++)
    {
        printf("Linha %d:\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Digite o elemento (%d, %d): ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
    }
}

void exibe_matriz(int m, int n, float **mat)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f ", mat[i][j]);
        printf("\n");
    }
}
