#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

	char nome, sexo, EstadoCivil; // DEFINI��O DE VARI�VEIS DO TIPO CHAR(CARACTERES)
	int idade;

	setlocale(LC_ALL,"Portuguese");

	// USAMOS SCANF COM CHAR PARA DIGITAR NOMES QUANDO N�O PRECISAMOS USAR ESPA�O NAS PALAVRAS, SCANF N�O ACEITA "ESPA�O"

	printf("Digite seu nome com mais de 3 caracteres: \n");
	scanf("%s", &nome);

	printf("Digite seu sexo (F ou M): \n");
	scanf("%s", &sexo);

	printf("Digite sua idade entre 0 e 150: \n");
	scanf("%i", &idade);

	printf("Digite seu estado civil: (S ou C ou V ou D) \n");
	scanf("%s", &EstadoCivil);

	while(strlen(nome)<=3 ) // strlen � UMA CONDI��O DE COMPARA��O COM QUANTIDADE DE LETRAS, NESTE CASO, VERIFICANDO SE O NOME POSSUI MAIS DE 3 LETRAS
	{
		printf("Digite seu nome novamente com mais de 3 carecteres \n");
		scanf("%s", &nome);
	}

	while(idade <= 0 || idade >= 150)
	{
		printf("Digite seu nome novamente a idade entre 0 e 150 \n");
		scanf("%i", &idade);
	}

	while(!strcmp(sexo, 'F')  || !strcmp(sexo, 'M'))
	{
		printf("Digite seu sexo novamente: \n");
		scanf("%s", &sexo);
	}

	printf("\nSaiu");

	return 0;
}
