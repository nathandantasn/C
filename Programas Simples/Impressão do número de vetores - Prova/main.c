#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet [9] = {12,6,9,5,14,8,33,54,35};
    int x=2, y=3;
    printf("\n %d", vet[x]);
    printf("\n\n %d", vet[x+1]);
    printf("\n\n %d", vet[x*2]);
    printf("\n\n %d", vet[x+y]);
    printf("\n\n %d", vet[x*y+2]);
    printf("\n\n %d", vet[vet[x-1]+1]);
    printf("\n\n %d", vet[vet[x+1]]);
    printf("\n\n %d", vet[vet[x+1]-(y+1)]);
    printf("\n\n %d", vet[vet[y+1]- vet[2+1]]);
    printf("\n\n %d", vet[vet[x*y+1]% vet[y-x]]);
    return 0;
}
