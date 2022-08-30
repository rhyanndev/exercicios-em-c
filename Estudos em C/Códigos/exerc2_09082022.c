#include <stdio.h> 
#define TAM_MAX 6

int main() {

	int vet[TAM_MAX], i;
	
	
	for(i = 0 ; i <TAM_MAX ; i++){
        scanf("%d", &vet[i]);
    }

    printf("Os valores sao: \n");
    for(i = 0 ; i <TAM_MAX ; i++){
        vet[i] = TAM_MAX -i;

    printf(" %d ", vet[i]);
    }

			
    
    
    
    return 0;
}