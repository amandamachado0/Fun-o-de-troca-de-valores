#include <stdio.h>

void trocarporvalor (int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    }
void trocarporreferencia(int *x, int*y) {
 int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    }

int main()
{
    int x = 10;
    int y = 2;
    printf("\nAntes: x = %i e y= %i", x, y);

    trocarporvalor(x,y); //manda copia

    printf("\nDepois: x= %i e y = %i", x ,y);

    trocarporreferencia(&x,&y); //compartilhar

    printf("\nDepois: x= %i e y = %i", x ,y);

}

