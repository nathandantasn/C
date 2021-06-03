#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float habitantes, mortalidade, crianca;
    int natalidade;

    while (natalidade!=0)
    {
    switch (natalidade)
    {
    case 1:
        {
        printf("\nDigite o número de habitantes da cidade: ");
        scanf("%f", &habitantes);

        printf("\nDigite o número de crianças nascidas: ");
        scanf("%f", &crianca);

        printf("\nA taxa de natalidade é %.2f a cada mil habitantes!\n", (crianca*1000)/habitantes);
        break;
        }

    case 2:
    {
        printf("\nDigite o número de habitantes da cidade: ");
        scanf("%f", &habitantes);

        printf("\nDigite o número de óbtos na cidade: ");
        scanf("%f", &mortalidade);

        printf("\nA taxa de mortalidade é %.2f a cada mil habitantes!\n", (mortalidade*1000)/habitantes);
        break;
    }
    }
        printf("\nDigite 1 para saber a taxa de Natalidade ou 2 para saber a taxa de mortalidade: ");
        scanf("%i", &natalidade);
    }
    return 0;
}
