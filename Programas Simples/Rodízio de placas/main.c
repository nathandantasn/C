#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int placa;

    printf("Digite o número final da placa: ");
    scanf("%i", &placa);

    if ((placa==1)||(placa==2))
    {
        printf("\n O dia do rodízio de seu carro é segunda feira!\n");
    }
    if ((placa==3)||(placa==4))
    {
        printf("\n O dia do rodízio de seu carro é terça feira!\n");
    }
    if ((placa==5)||(placa==6))
    {
        printf("\n O dia do rodízio de seu carro é quarta feira!\n");
    }
    if ((placa==7)||(placa==8))
    {
        printf("\n O dia do rodízio de seu carro é quinta feira!\n");
    }
    if ((placa==9)||(placa==0))
    {
        printf("\n O dia do rodízio de seu carro é sexta feira!\n");
    }
    return 0;
}
