#include <stdio.h>

int main(){
    int a;
    int b;
    int *pointer1;
    int *pointer2;


    printf("Digite o valor da variavel a: ");
    scanf("%d", &a);

    printf("Digite o valor da variavel b: ");
    scanf("%d", &b);

    pointer1 = &a;
    pointer2 = &b;

    if (*pointer1 > *pointer2){
        printf("O maior endereco e da variavel a: %p", pointer1);
    }
    else{
        printf("O maior endereco e da variavel b: %p", pointer2);
    }

    

    return 0;
}