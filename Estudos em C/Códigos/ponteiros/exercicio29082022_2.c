#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int *pointer1 = &a;
    int *pointer2 = &b;

    printf("o valor de a: %d \n", a);
    printf("o valor de b: %d \n", b);
    printf("O endereco de a: %p \n", pointer1);
    printf("O endereco de b: %p \n", pointer2);

    if(*pointer1 > *pointer2){
    printf("O maior endereco e o de a: %p", pointer1);
    }
    else{
        printf("O maior endereco e o de b: %p", pointer2);
    }

    return 0;
}