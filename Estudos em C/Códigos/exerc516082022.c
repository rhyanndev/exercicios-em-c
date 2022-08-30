#include <stdio.h>
#define NLIM 2
#define NCOL 2

int main (){

    int m, matriz1[NLIM][NCOL], matriz2[NLIM][NCOL], i, j;

    for ( m = 0; m < 2; m++)
    {
        for(i = 0 ; i < NLIM ; i++){
            for (j = 0; j < NCOL; j++)
            {
                printf("Digite o elemento da posição [%d][%d] da Matriz %d: ", i, j, m+1);

                if (m == 0)
                {
                    scanf("%d", &matriz1[i][j]);
                }
                else
                {
                    scanf("%d", &matriz2[i][j]);
                }
                
               
            }
            
        }
    }
    
                printf("A soma das Matrizes: \n");
            for(i = 0 ; i < NLIM ; i++){
            for (j = 0; j < NCOL; j++)
            {
              printf("%d ", matriz1[i][j]+matriz2[i][j]);
            }
            printf("\n"); 
            }  



            return 0;

}