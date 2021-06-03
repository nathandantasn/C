#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo
//de 0 ate 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
//e a um exame final. A media das três notas mencionadas anteriormente obedece aos
//pesos: Trabalho de Laboratorio: 2; Avaliacão Semestral: 3; Exame Final: 5. De acordo
//com o resultado, mostre na tela se o aluno esta reprovado (média entre 0 e 2,9), de
//recuperacão (entre 3 e 4,9) ou se foi aprovado.

int main()
{
    setlocale(LC_ALL, ""); //COMANDO PARA SETAR A LINGUAGEM DO PROGRAMA

    float lab, aval, exam, media; // DEFINIÇÃO DE VARIÁVEIS DO PROGRAMA DO TIPO FLOAT(NÚMEROS REAIS)

    printf("Digite a nota obtida no Trabalho de Laboratório: ");
    scanf("%f", &lab); // PEDINDO PARA LER A NOTA INSERIDA NA VARIÁVEL "lab"

    if ((lab>10)||(lab<0)) // VERIFICAR SE A NOTA É MAIOR QUE 10 "||"(OU) MENOR QUE 0, PARA QUE O CÓDIGO PROSSIGA
        {
            while((lab>10)||(lab<0)) // CONDIÇÃO: SE ELE FOR MAIOR QUE 10 "||"(OU) MENOR QUE 0, PEDIRÁ NOVAMENTE PARA INSERIR A NOTA
                {
                    printf("\nNota Inválida, por favor digite novamente!");
                    printf("\nDigite a nota obtida no Trabalho de Laboratório: ");
                    scanf("%f", &lab);
                }
        }

    printf("\nDigite a nota obtida na Avaliação Semestral: ");
    scanf("%f", &aval);  // PEDINDO PARA LER A NOTA INSERIDA NA VARIÁVEL "aval"

     if ((aval>10)||(aval<0)) // VERIFICAR SE A NOTA É MAIOR QUE 10 "||"(OU) MENOR QUE 0, PARA QUE O CÓDIGO PROSSIGA
        {
            while((aval>10)||(aval<0)) // CONDIÇÃO: SE ELE FOR MAIOR QUE 10 "||"(OU) MENOR QUE 0, PEDIRÁ NOVAMENTE PARA INSERIR A NOTA
                {
                    printf("\nNota Inválida, por favor digite novamente!");
                    printf("\nDigite a nota obtida no Avaliação Semestral: ");
                    scanf("%f", &aval);
                }
        }

    printf("\nDigite a nota obtida no Exame Final: ");
    scanf("%f", &exam); // PEDINDO PARA LER A NOTA INSERIDA NA VARIÁVEL "exam"

     if ((exam>10)||(exam<0)) // VERIFICAR SE A NOTA É MAIOR QUE 10 "||"(OU) MENOR QUE 0, PARA QUE O CÓDIGO PROSSIGA
        {
            while((exam>10)||(exam<0)) // CONDIÇÃO: SE ELE FOR MAIOR QUE 10 "||"(OU) MENOR QUE 0, PEDIRÁ NOVAMENTE PARA INSERIR A NOTA
                {
                    printf("\nNota Inválida, por favor digite novamente!");
                    printf("\nDigite a nota obtida no Exame Final: ");
                    scanf("%f", &exam);
                }
        }

    lab = lab * 0.2; // CÁLCULO DE PESO DA VARIÁVEL "lab"
    aval = aval * 0.3; // CÁLCULO DE PESO DA VARIÁVEL "aval"
    exam = exam * 0.5; // CÁLCULO DE PESO DA VARIÁVEL "exam"

    media = lab+aval+exam; // CÁLCULO DE MÉDIA DA NOTA

    if (media<=2.9) // CONDIÇÃO DE REPROVAÇÃO
        {
            printf("\nAluno foi reprovado!");
            printf("\nMédia final: %.2f\n\n", media);
        }
    if ((media<=4.9)&&(media>=3)) // CONDIÇÃO DE RECUPERAÇÃO // "&&" USADO PARA COLOCAR DUAS CONDIÇÕES // VALORES "ENTRE" (&&) 3 E 4.9
        {
            printf("\nAluno ficou de recuperação!");
            printf("\nMédia final: %.2f\n\n", media);
        }
    if (media>4.9) // CONDIÇÃO DE APROVAÇÃO
        {
            printf("\nAluno foi aprovado!");
            printf("\nMédia final: %.2f\n\n", media);
        }

        // AO FINAL O ALUNO/USUÁRIO SOUBE SE FOI REPROVADO, FICOU DE RECUPERAÇÃO OU FOI APROVADO, IMPRIMINDO A INFORMAÇÃO E A MÉDIA
        // A MÉDIA FOI DEMONSTRADA EM .2F PARA MOSTRAR APENAS 2 ALGORITMOS DEPOIS DA VÍRGULA DO NÚMERO REAL

    return 0;
}
