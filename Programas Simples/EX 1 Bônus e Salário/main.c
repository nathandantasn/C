#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Salario1;
    int Anos;

    printf("\n Qual � o seu Sal�rio atual: ");
    scanf("%f", &Salario1);

    printf("\n Quantos anos de empresa ABC: ");
    scanf("%d", &Anos);

     if (Anos>=5)
        {
        printf("\n Seu sal�rio com o Bonus �: R$ %.2f", (Salario1 * 0.2 + Salario1));
        printf("\n Seu Bonus foi de: R$ %.2f\n", Salario1* 0.2);
        }

    else
        {
        printf("\n Seu sal�rio com o Bonus �: R$ %.2f", (Salario1 * 0.1 + Salario1));
        printf("\n Seu Bonus foi de: R$ %.2f\n", Salario1* 0.1);
        }

    return 0;

}
