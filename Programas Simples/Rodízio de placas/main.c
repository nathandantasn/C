#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int placa;

    printf("Digite o n�mero final da placa: ");
    scanf("%i", &placa);

    if ((placa==1)||(placa==2))
    {
        printf("\n O dia do rod�zio de seu carro � segunda feira!\n");
    }
    if ((placa==3)||(placa==4))
    {
        printf("\n O dia do rod�zio de seu carro � ter�a feira!\n");
    }
    if ((placa==5)||(placa==6))
    {
        printf("\n O dia do rod�zio de seu carro � quarta feira!\n");
    }
    if ((placa==7)||(placa==8))
    {
        printf("\n O dia do rod�zio de seu carro � quinta feira!\n");
    }
    if ((placa==9)||(placa==0))
    {
        printf("\n O dia do rod�zio de seu carro � sexta feira!\n");
    }
    return 0;
}
