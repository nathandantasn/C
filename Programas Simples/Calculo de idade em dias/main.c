#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "Portuguese");

int dia, mes, ano, idade, anof, mesf, diaf; // VARI�VEIS DO TIPO INTEIRO

// PEDIR O DIA QUE O USU�RIO NASCEU

printf("\nDigite o dia que nasceu: ");
scanf("%i", &dia);

printf("\nDigite o m�s que nasceu: ");
scanf("%i", &mes);

printf("\nDigite o ano que nasceu: ");
scanf("%i", &ano);

// C�LCULO DE IDADE EM DIAS, AP�S PEDIR O DIA QUE O USU�RIO NASCEU
anof = (2020 - ano) * 365; // CALCULO TRANSFORMANDO A QUANTIDADE DE ANOS EM DIAS
mesf = (5 - mes)* 30; // CALCULO TRANSFORMANDO A QUANTIDADE DE MESES EM DIAS
diaf = 11 - dia; // CALCULO DE DIAS
idade = (anof + mesf + diaf);

printf("\nSua idade em dias �: %i", idade);

// OBS: CONSIDERAMOS QUE OS MESES TERIAM 30 DIAS E SEM ANOS BISSEXTOS

    return 0;
}
