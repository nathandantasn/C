#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float valor, ano, valorf, juros;

    setlocale(LC_ALL, "Portuguese");

    printf("Caso queira sair, digite 0!");
    printf("\nDigite o valor: R$ ");
    scanf("%f", &valor);

    while (valorf==1268.25)
    {
        juros = valor *0.01;
        valorf = juros*12;
        printf("\nO valor com os juros ap�s 1 ano ser� de: R$ %.2f", valorf);
        juros++;
    }

    return 0;
}
