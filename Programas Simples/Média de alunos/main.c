#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int turma, alunos, cont, totalalunos;
    cont = 0;
    alunos = 0;
    totalalunos = 0;
    printf("\nDigite a quantidade de turmas: ");
    scanf("%i", &turma);

        while (cont < turma)
        {
        printf("\nDigite a quantidade de alunos da turma: ");
        scanf("%i", &alunos);

            if (alunos> 40)
            {
                while (alunos>40)
                {
                printf("\nNÚMERO DE ALUNOS EXCEDE, POR FAVOR DIGITE NOVAMENTE\n");
                printf("\nDigite a quantidade de alunos da turma: ");
                scanf("%i", &alunos);
                }

            }

        cont++;
        totalalunos = alunos + totalalunos;

        }

        printf("\nTotal de alunos: %i\n", totalalunos);
        printf("\nMédia de alunos por turma: %i alunos\n\n", totalalunos/turma);

    return 0;
}
