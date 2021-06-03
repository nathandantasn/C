#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float prod (float x, float y)
{
	printf ("x = %.1f y = %.1f \n\n", x, y);
	return x + y;
}

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float a, b, c;
  printf ("Programa de multiplicação \n\n");
  printf ("Digite o primeiro número: ");
  scanf ("%f", &a);
  printf ("Digite o segundo número: ");
  scanf ("%f", &b);
  c = prod(a,b);
  printf ("O resultado da multiplicação de a por b é: %.1f \n", c);
  return (0);
}
