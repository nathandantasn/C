#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   float n1;

   printf("Digite a nota: ");
   scanf("%f", &n1);

   setlocale(LC_ALL,"Portuguese");

   while ((n1>10)||(n1<0))
   {
    printf("\nNOTA INV�LIDA, DIGITE NOVAMENTE!\n");

    printf("\nDigite a nota: ");
    scanf("%f", &n1);

   }
   printf("\nNOTA V�LIDA!\n");

    return 0;
}
