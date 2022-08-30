#include <stdio.h>
#include <stdlib.h>
#define num 4

int main (){

        int vet[num], i, ordem = 1; 
        int qtdNegativo = 0, soma = 0;


        for(i = 0; i < num ; i++){
        printf("%d numero real: ", ordem++);
        scanf("%d", &vet[i]);     
        

        if(vet[i] < 0){
        qtdNegativo += 1;  
        }
        else{
            soma += vet[i];
        }
        }
        
        printf("A quantidade de numeros negativos eh: %d \n", qtdNegativo);
        printf("A soma dos positivos eh: %d \n", soma);


        return 0;
}