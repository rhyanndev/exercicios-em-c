#include <stdio.h> 
#define TAM_MAX 5

int main() {

    int vet1[TAM_MAX], vetOrdenado[TAM_MAX], menor, i;

    for(i=0 ; i<TAM_MAX ; i++){
        scanf("%d", &vet1[i]);
        // lê os dados e preenche o vetor
    }

    for (i = 0; i < TAM_MAX; i++){
        scanf("%d", vet1[i]); // imprime os dados coletados no vetor
    }
    printf("\n");

    for(i = 0 ; i<TAM_MAX; i++){ //pecorre todas as posições do vetor vet1 
        int menor = 0; // para cada posição percorrida, assume 
        // que o menor é a posição 0

        for(int j=1; j<TAM_MAX; j++){ //varre a partir da posição 1 para descobrir o menor 
            if(vet1[j]<vet1[menor]){// se o menor não estiver na posição 0, será 
        // encontrado nesta verificação 

                menor=j; //armazena o índice da menor 

            }
        }
        vetOrdenado[i] = vet1[menor];
        vet1[menor]=9999999;

    }

    for(i=0; i<TAM_MAX; i++)
        printf("%d ", vetOrdenado[i]);
    return 0;
}