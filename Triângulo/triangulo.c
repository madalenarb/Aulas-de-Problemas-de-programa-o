#include <stdio.h>
#include <stdlib.h>

int main (){
    int h, i, v;

    printf("Insira a altura do triângulo: ");
    if(scanf("%d", &h) < 1)
        return EXIT_FAILURE;

    printf("Eis o triângulo: \n\n");

    for ( i = 1; i <= h; i++)
    {
        for (v = 1; v <= i; v++)
        {
            printf("*");
        }
        printf("\n");
    }

    for ( i = h - 1 ; i >= 1; i--)
    {
        for (v = 1; v <= i; v++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    return EXIT_SUCCESS;
}
