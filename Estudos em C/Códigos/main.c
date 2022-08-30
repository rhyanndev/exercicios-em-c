#include <stdio.h>
#define TAM_MAX 5 

int main(){

        double vet1[TAM_MAX];
        double maior;

        for(int i=0; i<TAM_MAX; i++)
            scanf("%lf", &vet1[i]); // le os dados


        maior = vet1[0]; // assume que o primeiro é o maior 
        for(int i=1; i<TAM_MAX; i++)
            if (vet1[i] > maior)
                maior = vet1[i];


        printf("O maior elemento e %2.f \n", maior);


        return 0;
}