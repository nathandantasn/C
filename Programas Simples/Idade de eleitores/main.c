#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int A, B, idade[10], media, soma;
    setlocale(LC_ALL, "Portuguese");
    B=0;
    printf("Digite as idades:\n");

    for (A=0; A<10; A++)
    {
        scanf("%i", &idade[A]);
        soma = soma + idade[A];

        if (idade[A]>=16)
        {
            B++;
        }
    }
    printf("\n%i alunos da turma podem votar, pois t�m idade m�nima de 16 anos!\n", B);
    media = soma/10;
    printf("\nA m�dia de idade da turma � de: %i anos\n", media);
    return 0;
}
