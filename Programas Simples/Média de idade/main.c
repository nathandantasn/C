#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,media;

    printf("Digite todas as idades:\n");
    scanf("%i\n", &i1);
    scanf("%i\n", &i2);
    scanf("%i\n", &i3);
    scanf("%i\n", &i4);
    scanf("%i\n", &i5);
    scanf("%i\n", &i6);
    scanf("%i\n", &i7);
    scanf("%i\n", &i8);
    scanf("%i\n", &i9);
    scanf("%i\n", &i10);

    media = (i1+i2+i3+i4+i5+i6+i7+i8+i9+i10)/10;

    printf("\nMédia de idade da turma: %i\n", media);

    if (media<=25)
    {
        printf("\nTURMA JOVEM");
    }
    else if ((media>25)&&(media<60))
    {
        printf("\nTURMA ADULTA");
    }
    else if (media>=60)
    {
        printf("\nTURMA IDOSA");
    }

    return 0;
}
