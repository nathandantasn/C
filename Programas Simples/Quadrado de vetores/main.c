#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor1[10];
    int vetor2[10];
    int x;

    printf("Digite os n�meros:\n");

    for (x=0; x<10; x++)
    {
        scanf("%i", &vetor1[x]);
    }
    printf("\n\nVetor 1:\n");
    for (x=0; x<10; x++)
    {
        printf("\nPara posi��o [%i] o n�mero do vetor �: %i", x, vetor1[x]);
    }
    for (x=0; x<10; x++)
    {
        vetor2[x]= (vetor1[x]*vetor1[x]);
    }
    printf("\n\nVetor 2:\n");
    for (x=0; x<10; x++)
    {
        printf("\nPara posi��o [%i] o n�mero do vetor �: %i", x, vetor2[x]);
    }
    return 0;
}
