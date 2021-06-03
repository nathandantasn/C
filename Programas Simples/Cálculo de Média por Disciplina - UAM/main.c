#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float A1, A2, A3, A4, A5, N1, N2, media;
    char disciplina[50];
    int sim;
    do
    {
        printf("\nDigite o nome da disciplina: ");
        gets(disciplina);

        printf("\nDigite a nota A1: ");
        scanf("%f", &A1);
            if ((A1>10)||(A1<0))
                {
                    while ((A1>10)||(A1<0))
                        {
                            printf("\nNota Inválida, por favor digite novamente!");
                            printf("\nDigite a nota A1: ");
                            scanf("%f", &A1);
                        }
                }
        printf("\nDigite a nota A2: ");
        scanf("%f", &A2);
        if ((A2>10)||(A2<0))
                {
                    while ((A2>10)||(A2<0))
                        {
                            printf("\nNota Inválida, por favor digite novamente!");
                            printf("\nDigite a nota A2: ");
                            scanf("%f", &A2);
                        }
                }
        printf("\nDigite a nota A3: ");
        scanf("%f", &A3);
        if ((A3>10)||(A3<0))
                {
                    while ((A3>10)||(A3<0))
                        {
                            printf("\nNota Inválida, por favor digite novamente!");
                            printf("\nDigite a nota A3: ");
                            scanf("%f", &A3);
                        }
                }
        printf("\nDigite a nota A4(APS): ");
        scanf("%f", &A4);
        if ((A4>10)||(A4<0))
                {
                    while ((A4>10)||(A4<0))
                        {
                            printf("\nNota Inválida, por favor digite novamente!");
                            printf("\nDigite a nota A4: ");
                            scanf("%f", &A4);
                        }
                }

        printf("\nDigite a nota A5: ");
        scanf("%f", &A5);
        if ((A5>10)||(A5<0))
                {
                    while ((A5>10)||(A5<0))
                        {
                            printf("\nNota Inválida, por favor digite novamente!");
                            printf("\nDigite a nota A5: ");
                            scanf("%f", &A5);
                        }
                }

    N1 = ((A1 + A2 + A3)/3) * 0.4;
    N2 = ((A4 * 0.1)+(A5 *0.9)) * 0.6;

    media = N1 + N2;

    printf("\nDisciplina: %s", disciplina);
    printf("\nA média final é: %.3f", media);

    printf("\n\nGostaria de calcular a média de outra disciplina? Digite 0 para SIM e 1 para encerrar o programa! ");
    scanf("%i", &sim);

    }while(sim==0);

    return 0;
}
