#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int produto;

    printf("\nC�digo do produto: ");
    scanf("%i", &produto);

       if (produto==1)
        {
            printf("\nAlimento n�o-perecivel\n");
        }
        else if ((produto==2)||(produto==3)||(produto==4))
        {
            printf("\nAlimento Perec�vel\n");
        }
        else if ((produto==5)||(produto==6))
        {
            printf("\nVestu�rio\n");
        }
        else if (produto==7)
        {
            printf("\nHigiene Pessoal\n");
        }
       else if ((produto==8)||(produto==9)||(produto==10))
        {
            printf("\nUtens�lios Dom�sticos\n");
        }
       else if ((produto>10)||(produto<1))
        {
            printf("\nC�DIGO INV�LIDO\n");
        }

    printf("\nPROGRAMA ENCERRADO!\n");

    return 0;
}
