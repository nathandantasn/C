#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int cod;

	char usuario[20], senha[20];

	cod = 0;

	while(cod == 0)
	{
		printf("Digite seu nome de usuario: \n");
  		scanf("%s", &usuario);

  		printf("Digite sua senha: \n");
  		scanf("%s", &senha);

  		if(strcmp (usuario, senha ) == 0)
  		{
  			printf("\nInvalido (usuario e senha iguais) \n\n");
			cod = 0;
		}
		else
		{
			printf("\nUsuario %s e senha %s validos \n", usuario, senha);

			cod = 1;
		}

	}

	printf("\nSaiu");

	return 0;
}
