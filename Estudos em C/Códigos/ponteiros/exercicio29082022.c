#include <stdio.h>

int main(){
    // int *x, valor, y;
    // valor = 35;
    // x = &valor; 
    // y = *x;

    // printf("Endereço da variável valor: %p \n", &valor);
    // printf("Conteúdo do ponteiro x: %p \n", x);
    // printf("Endereço da variável ponteiro x: %p \n", &x);
    // printf("Conteúdo da variável apontada por x: %d \n", *x);
    // printf("Conteúdo da variável y: %d \n", y);

    //Podemos atribuir um novo valor a uma variável a partir de um ponteiro 

    int a = 40;
    int *pointer = &a;
    *pointer = 30;

    printf("O conteúdo armazenado em a é: %d\n", a);
    printf("O conteúdo da variável apontada por pointer é: %d \n", a);




    return 0;
}