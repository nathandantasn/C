#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // DEFINIR A LINGUAGEM DE SAÍDA COMO PORTUGUÊS

    float n1, n2; // FLOAT É VARIÁVEL DE NÚMEROS REAIS
    char operador; // CHAR É VARIÁVEL DE CARACTERES(LETRAS, SÍMBOLOS)

    // USAMOS OS OPERADORES PADRÕES DE CÁLCULO COMO VARIÁVEL CHAR, PARA FICAR MELHOR REPRESENTADO

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("\nDigite a operação: ");
    scanf("%s", &operador);

    printf("\nDigite o segundo número: ");
    scanf("%f", &n2);

    switch (operador) // NESTE CASO DEFINIMOS UMA VARIÁVEL COM QUATRO POSSÍVEIS "CASOS", DEFINIDOS PELO PROGRAMADOR, POR ISSO, USAMOS "SWITCH"
    {
        case '+': // CASO "+": QUANDO DIGITAMOS "+", A CONTA REALIZADA DEVE SER SOMA
            {
            printf("\nResultado da soma: %.2f\n", n1+n2);
            break;
            }

        case '-': // CASO "-": QUANDO DIGITAMOS "-", A CONTA REALIZADA DEVE SER SUBTRAÇÃO
            {
            printf("\nResultado da subtração: %.2f\n", n1-n2);
            break;
            }

        case '/': //CASO "/": QUANDO DIGITAMOS "/", A CONTA REALIZADA DEVE SER DIVISÃO
            {
            if ((n1==0) || (n2==0)) // COLOCAMOS UM OPERADOR CONDICIONAL, SE DIGITAR 0 EM AMBAS AS VARIÁVEIS FLOAT, A DIVISÃO NÃO DEVE ACONTECER
            {
                printf("\nOperação inválida!\n");
                break;
            }
            else
            {
            printf("\nResultado da divisão: %.2f\n", n1/n2);
            break;
            }
            }

        case 'x': //CASO "X": QUANDO DIGITAMOS "X", A CONTA REALIZADA DEVE SER MULTIPLICAÇÃO
            {
            printf("\nResultado da multiplicação: %.2f\n", n1*n2);
            break;
            }
    }

    return 0;
}
