#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int mes;

    printf("Digite o n�mero que corresponde ao m�s para saber a esta��o: ");
    scanf("%i", &mes);

    if ((mes==1)||(mes==2)||(mes==12))
    {
        printf("\nA esta��o do m�s %i � Ver�o!\n", mes);
    }
    if ((mes==3)||(mes==4)||(mes==5))
    {
        printf("\nA esta��o do m�s %i � Outono!\n", mes);
    }
    if ((mes==6)||(mes==7)||(mes==8))
    {
        printf("\nA esta��o do m�s %i � Inverno!\n", mes);
    }
    if ((mes==9)||(mes==10)||(mes==11))
    {
        printf("\nA esta��o do m�s %i � Primavera!\n", mes);
    }
    if ((mes>12)||(mes<=0))
    {
        printf("\nO N�MERO N�O CORRESPONDE A NENHUM M�S!\n");
    }

    return 0;
}
