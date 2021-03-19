#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;
    int n;
    printf("Coloque um número real positivo: ");
    scanf("%f", &num);

    printf("Escolha um número de 0 a 7 para definir n: ");
    scanf("%d", &n);

    if( n < 7 && n > 1 ){
        printf("%.*f", n, num);
    } else {
        printf("Erro, n tem de ser entre 0 e 7.\n\n");
    }
}