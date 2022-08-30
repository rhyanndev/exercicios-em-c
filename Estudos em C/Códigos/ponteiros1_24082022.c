#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "");

    int *x, valor, y;
    valor = 35;
    x = &valor;
    y = *x;

    printf("Endereço da variável comum valor:  %p\n", &valor);
    printf("Lendo o conteúdo do ponteiro x: %p\n", x);
    printf("Endereço da variável ponteiro x: %p\n", &x);
    printf("Conteúdo da variável apontada por x: %d\n", *x);
    printf("Conteúdo da variável comum y: %d\n", y);
}