#include <stdio.h>
#include <stdlib.h>

int main (){
    int h, i, v;

    printf("Insira a altura do triângulo: ");
    scanf("%d", &h);
    printf("Eis o triângulo: \n\n");
    int b = 2 * h - 1;
    int c = (h + 1) / 2;

    for ( i = 0; i <= c; i++)
    {
        for (v = 0; v <= i; v++)
        {
            printf("*");
        }
        printf("\n");
    }

    for ( i = c - 1 ; i >= 0; i--)
    {
        for (v = 0; v <= i; v++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}
