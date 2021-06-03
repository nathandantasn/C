#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int mes;

    printf("Digite o número que corresponde ao mês para saber a estação: ");
    scanf("%i", &mes);

    if ((mes==1)||(mes==2)||(mes==12))
    {
        printf("\nA estação do mês %i é Verão!\n", mes);
    }
    if ((mes==3)||(mes==4)||(mes==5))
    {
        printf("\nA estação do mês %i é Outono!\n", mes);
    }
    if ((mes==6)||(mes==7)||(mes==8))
    {
        printf("\nA estação do mês %i é Inverno!\n", mes);
    }
    if ((mes==9)||(mes==10)||(mes==11))
    {
        printf("\nA estação do mês %i é Primavera!\n", mes);
    }
    if ((mes>12)||(mes<=0))
    {
        printf("\nO NÚMERO NÃO CORRESPONDE A NENHUM MÊS!\n");
    }

    return 0;
}
