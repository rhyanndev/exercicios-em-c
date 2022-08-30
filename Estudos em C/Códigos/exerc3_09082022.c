#include <stdio.h>
#define TAM_NOTAS 3 


int main() {
    
    int i, ordem = 1, media, soma = 0;
    int vet[TAM_NOTAS];


    for(i= 0 ; i < TAM_NOTAS ; i++){
    printf("Digite a nota do %d aluno: ", ordem++);
    scanf("%d", &vet[TAM_NOTAS]);
    
    }

    for(i = 0 ; i < TAM_NOTAS ; i++){
        soma = soma + vet[TAM_NOTAS];
    }

    media = soma / 3;

    printf("A media geral e: %d", media);

    return 0; 

}