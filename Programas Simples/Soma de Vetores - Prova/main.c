#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_1[] = {20,15,10,5};
    int vetor_2[] = {4,6,8,10};
    int vetor_3[4];
    int cont, soma;

    for(cont=0; cont<4; cont++)
    {
        vetor_3[cont]= vetor_1[cont] + vetor_2[cont];
        soma = soma + vetor_3[cont];
    }
    for(cont=0; cont<4; cont++)
    {
     printf("\nA soma na posição %i é: %i", cont, vetor_3[cont]);
    }

    return 0;
}
