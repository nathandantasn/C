#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x,y,cont,res;
    res =0;
    cont =1;
    printf("Digite 2 números inteiros:\n");
    scanf("%d %d", &x, &y);
    while(res<3)
    {
        for (cont =1; cont <=4; cont++)
        {
            if (cont <=3)
            {
                res = res +1;
            }
            else
            {
                res = res-1;
            }
        }
    }
    printf("O valor armazenado em res é: %d", res);
    return 0;
}
