#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()

{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], num[10];
    int x,i, impar;

    printf("Digite 10 números inteiros entre 0 e 50:\n");
    for (x=0; x<10; x++)
        {
            scanf("%i", &vetor[x]);
            if ((vetor[x]<0)||(vetor[x]>50))
                {
                    printf("Digite um número entre 0 e 50:\n");
                    scanf("%i", &vetor[x]);
                    while ((vetor[x]<0)||(vetor[x]>50))
                        {
                            printf("Digite um número entre 0 e 50:\n");
                            scanf("%i", &vetor[x]);
                        }
                }
        }

    for (x=0; x<10; x++)
        {
            if (vetor[x]%2!=0)
                {
                    num[x]= vetor[x];
                }
        }
        printf("\n NÚMEROS DIGITADOS\t NÚMEROS ÍMPARES\n");
    for (x=0; x<10; x++)
        {
            if (vetor[x]%2!=0)
            {
                printf("\t%i\t\t\t%i\n", vetor[x], num[x]);
            }
            else
            {
                printf("\t%i\t\t\t--\n", vetor[x]);
            }
        }

    return 0;
}
