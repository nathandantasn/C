#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i,ano;
    double salario, saldoacumulado, juros;
    printf("\tC�LCULO DE SAL�RIO DESDE 1995\n");
    printf("\t\nDigite o sal�rio em 1995: ");
    scanf("%lf", &salario);

    ano=1995;
    i=0;
    juros = 1.5;

    for (i=0; i<25; i++)
    {
        saldoacumulado = salario + (salario*(juros/100));
        juros = juros * 2;
        ano++;
        printf("\t\nEm %i o sal�rio era de R$ %.2lf", ano, saldoacumulado);
    }

    printf("\t\n\nEm 2020 o sal�rio � de R$ %.2lf\n", saldoacumulado);

	return 0;
}
