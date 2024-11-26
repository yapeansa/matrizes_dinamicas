#include <stdio.h>
#include <stdlib.h>

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
            printf("%f ", v[i * n + j]);

        printf("\n");
    }
}

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
