#include <stdio.h>
#include "matriz.h"

void preenche_matriz(int m, int n, float *v)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento (%d, %d): ", i, j);
            scanf("%f", &v[i * n + j]);
        }
    }
}

void exibe_matriz(int m, int n, float *v)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f ", v[i * n + j]);

        printf("\n");
    }
}
