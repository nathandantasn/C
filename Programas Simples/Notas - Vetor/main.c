#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota_vetor[10];
    int i;
    printf("Digite as 10 notas:\n");

    for (i=0; i<=9; i++)
    {
    scanf("%f", &nota_vetor[i]);
    }
    for (i=0; i<=9; i++)
    {
     if (i==6)
    {
     printf("\nA nota na posição[%i] é: %.2f", i, nota_vetor[i]);
    }
    if (i==8)
    {
    printf("\nA nota na posição[%i] é: %.2f", i, nota_vetor[i]);
    }
    }
    return 0;
}
