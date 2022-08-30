#include <stdio.h>
#define TAM_MAX 10

int main(){
	
	
	double vetReais[TAM_MAX], vetCopia[TAM_MAX]; 
	int i;
	
	for(i=0 ; i<TAM_MAX ; i++){	
		vetReais[i] = i+1; 

	for(int i=0; i<TAM_MAX; i++)
		vetCopia[i] = vetReais[i];

	printf("%.2lf\n ", vetReais[i]);
	
}

	return 0;
}
