#include <stdio.h>
#define TAMLIN 10
#define TAMCOL 20

int main() {

	int matriz[TAMLIN][TAMCOL];
	int i, j;
	int k;
	
	
	for( i = 0 ; i < TAMLIN ; i++){
		for(j = 0 ; j < TAMCOL ; j ++){
		
		
			matriz[i][j] = k++ +1;
			
			printf("  %d   ", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
}
