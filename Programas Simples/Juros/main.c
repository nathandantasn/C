#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

	int cod, rot;
	float investimento, juros, saldo=0, porcento, SaldoAcumulado;

	cod = 0;
	rot = 1;
	saldo = 0;

	setlocale(LC_ALL,"Portuguese");


	do
	{
		printf("\nQuanto será o investimento por mes: \n");
  		scanf("%f", &investimento);

		printf("Qual sera a taxa de juros mensal: \n");
  		scanf("%f", &porcento);

  		while(rot<13)
		{
	        juros = (SaldoAcumulado + investimento) * (porcento/100);
	        SaldoAcumulado = SaldoAcumulado + investimento + juros;

	  		printf("%d mes, valor %0.2f \n", rot, SaldoAcumulado);

	  		rot++;
		}

		printf("\nSaldo do investimento apos 1 ano = %0.2f  \n", SaldoAcumulado);

		printf("\nDeseja fazer do ano seguinte? 0S ou 1N \n");
  		scanf("%d", &cod);

  		SaldoAcumulado = SaldoAcumulado + saldo;

	}while (cod==0);

	return 0;
}
