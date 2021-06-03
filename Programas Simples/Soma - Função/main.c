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
  printf ("Programa de multiplicação \n\n");
  printf ("Digite o primeiro número: ");
  scanf ("%i", &a);
  printf ("Digite o segundo número: ");
  scanf ("%i", &b);
  c = prod(a,b);
  printf ("O resultado da multiplicação de a por b é: %i \n", c);
  return (0);
}
