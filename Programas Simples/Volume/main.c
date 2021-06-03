#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   float lado,comp,larg,alt,raiob,altc;
   int volume;

   printf("Digite 1 para calcular o Volume de Cubo, 2 para Paralelepípedo ou 3 para Cilindro: ");
   scanf("%i", &volume);

   while (volume!=0)
   {
       if (volume==1)
       {
           printf("\nCalcule o volume do Cubo!\n");
           printf("\nDigite o lado do cubo: ");
           scanf("%f", &lado);
           printf("\nO volume do cubo é: %.2f", lado*lado*lado);
       }
       else if (volume==2)
       {
           printf("\nCalcule o volume do Paralelepípedo\n!");
           printf("\nDigite o valor do comprimento: ");
           scanf("%f", &comp);
           printf("\nDigite o valor da largura: ");
           scanf("%f", &larg);
           printf("\nDigite o valor da altura: ");
           scanf("%f", &alt);
           printf("\nO volume do Paralelepípedo é: %.2f", comp*larg*alt);
       }
       else if (volume==3)
       {
           printf("\nCalcule o volume do Cilindro!\n");
           printf("\nDigite o valor do raio da base: ");
           scanf("%f", &raiob);
           printf("\nDigite o valor da altura do cilindro: ");
           scanf("%f", &altc);
           printf("\nO volume do cilindro é aproximadamente: %.2f\n", 3.14 *(raiob*raiob)*altc);
       }
        printf("\nDigite 1 para calcular o Volume de Cubo, 2 para Paralelepípedo ou 3 para Cilindro: ");
        scanf("%i", &volume);
   }


    return 0;
}
