#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[9], i, sp=0, sn=0;
    for(i=0;i<=9;i++)
    {
                     printf("informe o valor do vetor [%i]",i+1);
                     scanf("%i", &vet[i]);
                     if(vet[i]>0)
                     sp = sp +vet[i];
                     if(vet[i]<0)
                     sn = sn + 1;
                     }
printf("numeros positivos soma = %d\n", sp);
printf("numeros negativos quantidade = %d\n", sn);
system("PAUSE");
return 0;
}