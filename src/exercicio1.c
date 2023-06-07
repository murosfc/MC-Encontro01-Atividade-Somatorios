// Aluno: Felipe Celestino Muros

#include <stdio.h>

#define n 5

int letraA(int matriz[n][n])
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int letraB(int matriz[n][n])
{
    int soma = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int letraC(int matriz[n][n])
{
    int soma = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i != j)
                soma += matriz[i][j];
        }
    }
    return soma;
}

int letraD(int matriz[n][n])
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += matriz[i][i];
    }
    return soma;
}

int letraE(int matriz[n][n])
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i < j)
                soma += matriz[i][j];
        }
    }
    return soma;
}

int letraF(int matriz[n][n])
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i > j)
                soma += matriz[i][j];
        }
    }
    return soma;
}

int letraG(int matriz[n][n])
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i > j)
                soma += matriz[i][j] * matriz[j][i];
        }
    }
    return soma;
}

int letraH(int matriz[n][n], int x)
{    
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma += matriz[i][j] * x;
        }
    }
    return soma;
}

void letraI(int matriz[n][n], int vetor[n])
{
    printf("\n\nResposta letra i = vetor: ");
   for (int i = 0; i < n; i++)
   {
        int soma = 0;
       for (int j = 0; j < n; j++)
       {
           soma += matriz[i][j];
       }
        vetor[i] = soma;
        if (i == n-1){
            printf("%d", vetor[i]);
        }
        else printf("%d, ", vetor[i]);
   }
}

void letraJ(int matriz[n][n], int vetor[n])
{
    printf("\n\nResposta letra j = vetor: ");
   for (int j = 0; j < n; j++)
   {
        int produto = 1;
       for (int i = 0; i < n; i++)
       {
           produto *= matriz[i][j];
       }
        vetor[j] = produto;
        if (j == n-1){
            printf("%d", vetor[j]);
        }
        else printf("%d, ", vetor[j]);
   }
}

void preencherMatriz(int matriz[n][n])
{
    matriz[0][0] = 0;
    matriz[0][1] = 2;
    matriz[0][2] = 8;
    matriz[0][3] = 1;
    matriz[0][4] = 7;
    matriz[1][0] = 1;
    matriz[1][1] = 5;
    matriz[1][2] = 8;
    matriz[1][3] = 2;
    matriz[1][4] = 2;
    matriz[2][0] = 3;
    matriz[2][1] = 4;
    matriz[2][2] = 0;
    matriz[2][3] = 8;
    matriz[2][4] = 1;
    matriz[3][0] = 9;
    matriz[3][1] = 1;
    matriz[3][2] = 2;
    matriz[3][3] = 7;
    matriz[3][4] = 2;
    matriz[4][0] = 3;
    matriz[4][1] = 0;
    matriz[4][2] = 1;
    matriz[4][3] = 0;
    matriz[4][4] = 4;
}

int main()
{
    int matriz[n][n];
    preencherMatriz(matriz);

    printf("Resposta letra a: %d\n", letraA(matriz));
    printf("\nResposta letra b: %d\n", letraB(matriz));
    printf("\nResposta letra c: %d\n", letraC(matriz));
    printf("\nResposta letra d: %d\n", letraD(matriz));
    printf("\nResposta letra e: %d\n", letraE(matriz));
    printf("\nResposta letra f: %d\n", letraF(matriz));
    printf("\nResposta letra g: %d\n", letraG(matriz));

    int x = 1;
    printf("\nDigite um valor para x: ");
    scanf("%d", &x);
    printf("\nResposta letra h: %d\n", letraH(matriz, x));

    int V[n];
    letraI(matriz, V);

    int P[n];
    letraJ(matriz, P);

    return 0;
}