#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "Portuguese");

int dia, mes, ano, idade, anof, mesf, diaf; // VARIÁVEIS DO TIPO INTEIRO

// PEDIR O DIA QUE O USUÁRIO NASCEU

printf("\nDigite o dia que nasceu: ");
scanf("%i", &dia);

printf("\nDigite o mês que nasceu: ");
scanf("%i", &mes);

printf("\nDigite o ano que nasceu: ");
scanf("%i", &ano);

// CÁLCULO DE IDADE EM DIAS, APÓS PEDIR O DIA QUE O USUÁRIO NASCEU
anof = (2020 - ano) * 365; // CALCULO TRANSFORMANDO A QUANTIDADE DE ANOS EM DIAS
mesf = (5 - mes)* 30; // CALCULO TRANSFORMANDO A QUANTIDADE DE MESES EM DIAS
diaf = 11 - dia; // CALCULO DE DIAS
idade = (anof + mesf + diaf);

printf("\nSua idade em dias é: %i", idade);

// OBS: CONSIDERAMOS QUE OS MESES TERIAM 30 DIAS E SEM ANOS BISSEXTOS

    return 0;
}
