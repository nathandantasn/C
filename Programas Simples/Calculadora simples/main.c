#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // DEFINIR A LINGUAGEM DE SA�DA COMO PORTUGU�S

    float n1, n2; // FLOAT � VARI�VEL DE N�MEROS REAIS
    char operador; // CHAR � VARI�VEL DE CARACTERES(LETRAS, S�MBOLOS)

    // USAMOS OS OPERADORES PADR�ES DE C�LCULO COMO VARI�VEL CHAR, PARA FICAR MELHOR REPRESENTADO

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);

    printf("\nDigite a opera��o: ");
    scanf("%s", &operador);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &n2);

    switch (operador) // NESTE CASO DEFINIMOS UMA VARI�VEL COM QUATRO POSS�VEIS "CASOS", DEFINIDOS PELO PROGRAMADOR, POR ISSO, USAMOS "SWITCH"
    {
        case '+': // CASO "+": QUANDO DIGITAMOS "+", A CONTA REALIZADA DEVE SER SOMA
            {
            printf("\nResultado da soma: %.2f\n", n1+n2);
            break;
            }

        case '-': // CASO "-": QUANDO DIGITAMOS "-", A CONTA REALIZADA DEVE SER SUBTRA��O
            {
            printf("\nResultado da subtra��o: %.2f\n", n1-n2);
            break;
            }

        case '/': //CASO "/": QUANDO DIGITAMOS "/", A CONTA REALIZADA DEVE SER DIVIS�O
            {
            if ((n1==0) || (n2==0)) // COLOCAMOS UM OPERADOR CONDICIONAL, SE DIGITAR 0 EM AMBAS AS VARI�VEIS FLOAT, A DIVIS�O N�O DEVE ACONTECER
            {
                printf("\nOpera��o inv�lida!\n");
                break;
            }
            else
            {
            printf("\nResultado da divis�o: %.2f\n", n1/n2);
            break;
            }
            }

        case 'x': //CASO "X": QUANDO DIGITAMOS "X", A CONTA REALIZADA DEVE SER MULTIPLICA��O
            {
            printf("\nResultado da multiplica��o: %.2f\n", n1*n2);
            break;
            }
    }

    return 0;
}
