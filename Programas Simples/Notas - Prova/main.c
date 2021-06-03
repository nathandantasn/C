#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   float notas[5];
   int tam,i,j,tot_Media;
   float mediaClasse, fltAcmNotas,Nota;
   tam=0;
   tam = sizeof(notas)/sizeof(notas[0]);
   for(i=0; i<tam; i++)
   {
       printf("Digite a nota do %d aluno: ",i+1);
       scanf("%f", &Nota);
       notas[i] = Nota;
       fltAcmNotas = fltAcmNotas + notas[i];
   }
   mediaClasse=fltAcmNotas/tam;
   printf("A média da classe é %.1f \n", mediaClasse);

   for (j=0;j<tam; j++)
   {
       if(notas[j]>= mediaClasse)
       {
           tot_Media++;
       }
   }
   printf("Total de alunos maior ou igual a media da classe: %d", tot_Media);
    return 0;
}
