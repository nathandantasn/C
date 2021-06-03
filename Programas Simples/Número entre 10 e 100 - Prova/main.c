#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int cont, numero;
printf ("Digite um número inteiro entre 10 e 100 que represente o intervalo desejado: \n");
scanf ("%d", &numero);
if ((numero>=10) && (numero<=100))
    {
    for (cont = 0; cont <= numero;cont=cont+2)
    {
    printf("%d ", cont);
    }
    }
    else
    {
    printf ("O número digitado tem que estar entre 10 e 100");
    }
return 0;
}
