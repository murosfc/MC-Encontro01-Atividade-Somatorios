// Aluno: Felipe Celestino Muros
//Exercício 3

#include <stdio.h>

#define n 30

int getMaxSomaIntervaloK(int vetor[n], int k){
    int soma;
    int maxSoma = 0;
    for (int i=0; i <= n-k; i++){
        soma = 0;
        for (int j=i; j < i+k; j++){
            soma += vetor[j];
        }
        if (soma > maxSoma)
            maxSoma = soma;        
    }
    return maxSoma;    
}

int preencherVetor(int vetor[n]){
    for (int i=0; i < n; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }
}

int main(){
    int vet[n];
    int k = 0;
    preencherVetor(vet);
    while (k < 1 || k > 4){
        printf("Digite um número inteiro k (1 <= k <= 4): ");
        scanf("%d", &k);
    }
    printf("Maior somatório no intervalo de %d elementos: %d", k, getMaxSomaIntervaloK(vet, k));
    
    return 0;
}