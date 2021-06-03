#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int temp, cont;
    int vetor_prova[10] = {9,8,7,6,5,4,3,2,1,0};
    while (cont<10)
    {
        temp = vetor_prova[cont];
        vetor_prova[cont]=vetor_prova[9-cont];
        vetor_prova[9-cont] = temp;
        cont = cont +1;
    }
    for (cont=0; cont <=9; cont++)
    {
        printf("Posição %d é igual a %d \n", cont, vetor_prova[cont]);

    }
    return 0;
}
