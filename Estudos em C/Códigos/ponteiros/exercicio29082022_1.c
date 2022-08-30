#include <stdio.h>


// Escreva um programa que declare um inteiro, um double e umchar, e ponteirosparainteiro, double, e char. Associe as variáveis aos ponteiros (use &). Modifiqueosvalores de cada variável usando os ponteiros. Imprima os valores das variáveisantes e após a modificação.

int main(){
    int a = 40;
    double b = 30;
    char c = 20;
    int *pointer1;
    double *pointer2; 
    char *pointer3; 
    pointer1 = &a;
    pointer2 = &b; 
    pointer3 = &c; 
    *pointer1 = 50;
    *pointer2 = 25.7;
    *pointer3 = 46;

    printf("o valor da variavel a: %d \n", a);
    printf("o valor da variavel b: %lf \n", b);
    printf("o valor da variavel c: %d \n", c);




}