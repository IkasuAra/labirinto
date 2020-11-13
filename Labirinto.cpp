#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

void preencheCorreto(int **matriz, int linhas, int colunas)
{
    for (int k = 1; 1; k++)
    {
        int cabou = 1;
        if (k >= 2)
        {
            for (int i = 0; i < linhas; ++i)
            {
                for (int j = 0; j < colunas; ++j)
                {
                    if (i != 0)
                    {
                        if (matriz[i][j] == k - 1)
                        {
                            if (matriz[i - 1][j] == 0)
                            {
                                matriz[i - 1][j] = k;
                            }
                        }
                    }
                    if (j != colunas - 1)
                    {
                        if (matriz[i][j] == k - 1)
                        {
                            if (matriz[i][j + 1] == 0)
                            {
                                matriz[i][j + 1] = k;
                            }
                        }
                    }
                    if (j != 0)
                    {
                        if (matriz[i][j] == k - 1)
                        {
                            if (matriz[i][j - 1] == 0)
                            {
                                matriz[i][j - 1] = k;
                            }
                        }
                    }
                    if (i != linhas - 1)
                    {
                        if (matriz[i][j] == k - 1)
                        {
                            if (matriz[i + 1][j] == 0)
                            {
                                matriz[i + 1][j] = k;
                            }
                        }
                    }
                }
            }
        }
        for (int l = 0; l < linhas; ++l)
        {
            for (int i = 0; i < colunas; ++i)
            {
                if (matriz[l][i] == 0)
                    cabou = 0;
            }
        }
        if (cabou)
            break;
    }
}

void inputValores(int **matriz, int linhas, int colunas, int *lrato, int *crato, int *lqueijo, int *cqueijo)
{
    printf("Digite onde o rato começa: ");
    scanf("%d%d", lrato, crato);
    printf("Digite onde o queijo começa: ");
    scanf("%d%d", lqueijo, cqueijo);
    for (int i = 0; i < linhas; ++i)
    {
        for (int j = 0; j < colunas; ++j)
        {
            if (i == *lrato && j == *crato)
            {
                matriz[i][j] = 1;
            }
            else
                matriz[i][j] = 0;
        }
    }
}

void outputCaminho(int **matriz, int linhas, int colunas, int lrato, int crato, int lqueijo, int cqueijo)
{
}
int **leitura(int *linhas, int *colunas)
{
    printf("digite o numero de linhas e colunas: ");
    scanf("%d%d", linhas, colunas);
    int **mat = (int **)malloc(*linhas * sizeof(int *));
    for (int i = 0; i < *linhas; i++)
    {
        mat[i] = (int *)malloc(*colunas * sizeof(int));
    }
    return mat;
}

void imprimir(int **mat, int linhas, int colunas)
{
    for (int i = 0; i < linhas; ++i)
    {
        for (int j = 0; j < colunas; ++j)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void liberar(int **mat, int linhas)
{
    for (int i = 0; i < linhas; ++i)
    {
        free(mat[i]);
    }
    free(mat);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int linhas, colunas, lrato, crato, lqueijo, cqueijo;
    int **matriz = leitura(&linhas, &colunas);
    inputValores(matriz, linhas, colunas, &lrato, &crato, &lqueijo, &cqueijo);
    preencheCorreto(matriz, linhas, colunas);
    printf("\n\n");

    imprimir(matriz, linhas, colunas);
    printf("\n\n O rato está na posição %d \n O queijo está na posição %d \n VÁ PEGAR!!", matriz[lrato][crato],
           matriz[lqueijo][cqueijo]);
    liberar(matriz, linhas);
    return 0;
}