#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo
//de 0 ate 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral
//e a um exame final. A media das tr�s notas mencionadas anteriormente obedece aos
//pesos: Trabalho de Laboratorio: 2; Avaliac�o Semestral: 3; Exame Final: 5. De acordo
//com o resultado, mostre na tela se o aluno esta reprovado (m�dia entre 0 e 2,9), de
//recuperac�o (entre 3 e 4,9) ou se foi aprovado.

int main()
{
    setlocale(LC_ALL, ""); //COMANDO PARA SETAR A LINGUAGEM DO PROGRAMA

    float lab, aval, exam, media; // DEFINI��O DE VARI�VEIS DO PROGRAMA DO TIPO FLOAT(N�MEROS REAIS)

    printf("Digite a nota obtida no Trabalho de Laborat�rio: ");
    scanf("%f", &lab); // PEDINDO PARA LER A NOTA INSERIDA NA VARI�VEL "lab"

    if ((lab>10)||(lab<0)) // VERIFICAR SE A NOTA � MAIOR QUE 10 "||"(OU) MENOR QUE 0, PARA QUE O C�DIGO PROSSIGA
        {
            while((lab>10)||(lab<0)) // CONDI��O: SE ELE FOR MAIOR QUE 10 "||"(OU) MENOR QUE 0, PEDIR� NOVAMENTE PARA INSERIR A NOTA
                {
                    printf("\nNota Inv�lida, por favor digite novamente!");
                    printf("\nDigite a nota obtida no Trabalho de Laborat�rio: ");
                    scanf("%f", &lab);
                }
        }

    printf("\nDigite a nota obtida na Avalia��o Semestral: ");
    scanf("%f", &aval);  // PEDINDO PARA LER A NOTA INSERIDA NA VARI�VEL "aval"

     if ((aval>10)||(aval<0)) // VERIFICAR SE A NOTA � MAIOR QUE 10 "||"(OU) MENOR QUE 0, PARA QUE O C�DIGO PROSSIGA
        {
            while((aval>10)||(aval<0)) // CONDI��O: SE ELE FOR MAIOR QUE 10 "||"(OU) MENOR QUE 0, PEDIR� NOVAMENTE PARA INSERIR A NOTA
                {
                    printf("\nNota Inv�lida, por favor digite novamente!");
                    printf("\nDigite a nota obtida no Avalia��o Semestral: ");
                    scanf("%f", &aval);
                }
        }

    printf("\nDigite a nota obtida no Exame Final: ");
    scanf("%f", &exam); // PEDINDO PARA LER A NOTA INSERIDA NA VARI�VEL "exam"

     if ((exam>10)||(exam<0)) // VERIFICAR SE A NOTA � MAIOR QUE 10 "||"(OU) MENOR QUE 0, PARA QUE O C�DIGO PROSSIGA
        {
            while((exam>10)||(exam<0)) // CONDI��O: SE ELE FOR MAIOR QUE 10 "||"(OU) MENOR QUE 0, PEDIR� NOVAMENTE PARA INSERIR A NOTA
                {
                    printf("\nNota Inv�lida, por favor digite novamente!");
                    printf("\nDigite a nota obtida no Exame Final: ");
                    scanf("%f", &exam);
                }
        }

    lab = lab * 0.2; // C�LCULO DE PESO DA VARI�VEL "lab"
    aval = aval * 0.3; // C�LCULO DE PESO DA VARI�VEL "aval"
    exam = exam * 0.5; // C�LCULO DE PESO DA VARI�VEL "exam"

    media = lab+aval+exam; // C�LCULO DE M�DIA DA NOTA

    if (media<=2.9) // CONDI��O DE REPROVA��O
        {
            printf("\nAluno foi reprovado!");
            printf("\nM�dia final: %.2f\n\n", media);
        }
    if ((media<=4.9)&&(media>=3)) // CONDI��O DE RECUPERA��O // "&&" USADO PARA COLOCAR DUAS CONDI��ES // VALORES "ENTRE" (&&) 3 E 4.9
        {
            printf("\nAluno ficou de recupera��o!");
            printf("\nM�dia final: %.2f\n\n", media);
        }
    if (media>4.9) // CONDI��O DE APROVA��O
        {
            printf("\nAluno foi aprovado!");
            printf("\nM�dia final: %.2f\n\n", media);
        }

        // AO FINAL O ALUNO/USU�RIO SOUBE SE FOI REPROVADO, FICOU DE RECUPERA��O OU FOI APROVADO, IMPRIMINDO A INFORMA��O E A M�DIA
        // A M�DIA FOI DEMONSTRADA EM .2F PARA MOSTRAR APENAS 2 ALGORITMOS DEPOIS DA V�RGULA DO N�MERO REAL

    return 0;
}
