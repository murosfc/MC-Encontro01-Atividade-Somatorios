// Aluno: Felipe Celestino Muros
//Exercício 2

/*Considere os vetores V1 e V2, ambos com 40 números inteiros lidos pelo teclado, e dois números inteiros x
(x ̸= 0) e y (y ̸= 0) lidos pelo teclado na função main*/

#include <stdio.h>

#define n 40

void preencheVetor(int V1[], int V2[]){
    for (int i = 0; i < n; i++)
    {
        printf("Digite um número inteiro para o V1 na posicao %d: ", (i+1));
        scanf("%d", &V1[i]);
        printf("Digite um número inteiro para o V2 na posicao %d: ", (i+1));
        scanf("%d", &V2[i]);
    }
}

int comparaSomaProduto(int V1[], int V2[], int x, int y){
    int somatorioV1 = 0, produtorioV2 = 1;
    for (int i = 0; i < n; i++){
        if(i % 2 == 0){
            produtorioV2 *= V2[i] * y;   
        }else{
            somatorioV1 += V1[i] * x;
        }        
    }
    if (somatorioV1 <= produtorioV2)
        return 1;
    else
        return 0;    
}

int main(){
    int V1[n], V2[n];
    int x =0, y=0;
    preencheVetor(V1, V2);
    while(x == 0){
        printf("Digite um número inteiro x (x != 0): ");
        scanf("%d", &x);
    }
    while(y == 0){
        printf("Digite um número inteiro y (y != 0): ");
        scanf("%d", &y);
    }
    if (comparaSomaProduto(V1, V2, x, y) == 1){
        printf("\nCondição verdadeira");
    }else{
        printf("\nCondição falsa");
    }
}