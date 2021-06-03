#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i,ano;
    double salario, saldoacumulado, juros;
    printf("\tCÁLCULO DE SALÁRIO DESDE 1995\n");
    printf("\t\nDigite o salário em 1995: ");
    scanf("%lf", &salario);

    ano=1995;
    i=0;
    juros = 1.5;

    for (i=0; i<25; i++)
    {
        saldoacumulado = salario + (salario*(juros/100));
        juros = juros * 2;
        ano++;
        printf("\t\nEm %i o salário era de R$ %.2lf", ano, saldoacumulado);
    }

    printf("\t\n\nEm 2020 o salário é de R$ %.2lf\n", saldoacumulado);

	return 0;
}
