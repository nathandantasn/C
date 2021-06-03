#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dobro(int n, int x)
{
    printf("\nx = %i e n = %i", x, n);
    x = 2*n;
    printf("\nx = %i e n = %i", x, n);
}

int main()
{
    printf("Obtenha o dobro do valor digitado!\n");
    printf("Digite um número: ");
    scanf("%i\n", &n);
    dobro();
    printf("\n\nO dobro do valor %i é: %i", n, x);
    return (0);
}
