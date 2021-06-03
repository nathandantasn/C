#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int cont, a, b;
   int vet[33];
   b=0;
   for(cont=2; cont<=30; cont++)
   {
       a = cont + 2;
       vet[cont] = a + (3*cont);
       if (cont<3)
       {
           if (vet[a]<vet[cont])
            b=b+3;
       }
       else
       {
           b = b-1;
       }
   }
   printf("Valor de b: %d \n", b);
   printf("Posição 21 do vetor: %d", vet[21]);
    return 0;
}
