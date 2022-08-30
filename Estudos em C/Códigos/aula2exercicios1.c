#include <stdio.h>
#define TAM_MAX 5

int main(){
	
	
	double vetReais[TAM_MAX]; 
	int i;
	
	for(i=0 ; i<TAM_MAX ; i++){
	
		vetReais[i] = TAM_MAX - i; 

	printf("%.2lf ", vetReais[i]);
}

	return 0;
}
