#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    float altura;
    char sexo;

    printf("Digite seu sexo(use M para masculino e F para feminino): ");
    scanf("%s", &sexo);

    printf("\nDigite o sua altura: ");
    scanf("%f", &altura);

    switch (sexo)
    {
    case 'F':
        {
            printf("\nSeu peso ideal é: %.2f\n", altura*62.1 - 44.7);
            break;
        }

    case 'M':
        {
            printf("\nSeu peso ideal é: %.2f\n", altura*72.7 - 58);
            break;
        }
    }

    return 0;
}
