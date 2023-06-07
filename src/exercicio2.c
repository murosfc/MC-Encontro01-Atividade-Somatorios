// Aluno: Felipe Celestino Muros
//Exercício 2

#include <stdio.h>
#include <stdlib.h>

#define n 50

void preencheVetor(int vetor[n])
{
    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand() % 100 + 1;
    }
}

void printVetor(int vetor[n])
{
    for (int i = 0; i < n; i++)
    {
        if(i == n-1)
            printf("%d", vetor[i]);
        else
            printf("%d, ", vetor[i]);
    }
    printf("\n");
}

void modificarVetor(int vetor[n])
{
    for (int j = 0; j < n; j++){
        int soma = 0;
        for (int i = 0; i < n; i++){
        
        
            if (i != j)
                soma += vetor[i];            
        }
        vetor[j] = soma;
    }
}

int main(){
    int vet[n];
    preencheVetor(vet);
    printf("Vetor original:\n");
    printVetor(vet);
    printf("\nVetor modificado:\n");
    modificarVetor(vet);
    printVetor(vet);
    return 0;
}