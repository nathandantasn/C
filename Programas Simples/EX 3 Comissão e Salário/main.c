#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

float vendido;

printf("\nQual o valor de Venda: R$ ");
scanf("%f", &vendido);

    if (vendido>2000)
    {
    printf("\nSua comiss�o � de: R$ %.2f", vendido*0.1);
    printf("\nO seu sal�rio bruto a receber � de: R$ %.2f\n", vendido*0.1+1200);
    }
    else
    {
    printf("\nVoc� n�o alcan�ou a meta de vendas!");
    printf("\nO seu sal�rio bruto a receber � de: R$ 1200,00\n");
    }

    return 0;
}
