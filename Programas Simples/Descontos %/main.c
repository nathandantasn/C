#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float desconto, compra;

    printf("Valor da compra: ");
    scanf("%f", &compra);

    printf("\nDigite aqui seu c�digo de cliente: ");
    scanf("%f", &desconto);

    while (desconto!=0)
    {

    if (desconto==1)
    {
        printf("\nParab�ns pela sua compra! O total a pagar � R$ %.2f\n", compra);
    }
    else if (desconto==2)
    {
        printf("\nParab�ns pela sua compra! O total a pagar � R$ %.2f\n", compra - compra*0.1);
    }
    else if (desconto==3)
    {
        printf("\nParab�ns pela sua compra! O total a pagar � R$ %.2f\n", compra - compra*0.05);
    }

        printf("Valor da compra: ");
        scanf("%f", &compra);

        printf("\nDigite aqui seu c�digo de cliente: ");
        scanf("%f", &desconto);
    }
    return 0;
}
