#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int prod (int x, int y)
{
	printf ("x = %i y = %i \n\n", x, y);
	return x + y;
}

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b, c;
  printf ("Programa de multiplica��o \n\n");
  printf ("Digite o primeiro n�mero: ");
  scanf ("%i", &a);
  printf ("Digite o segundo n�mero: ");
  scanf ("%i", &b);
  c = prod(a,b);
  printf ("O resultado da multiplica��o de a por b �: %i \n", c);
  return (0);
}
