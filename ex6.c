#include <stdio.h>
#include <stdlib.h>

int mes;

int main(){
    printf("Insere o número correspondente a um mês: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("Tem 31 dias.");
        break;

    case 4:
        printf("Tem 30 dias.");
        break;

    case 2:
        printf("Tem 28 dias, exepto nos anos bissextos, nos quais tem 29 dias.");
        break;
        
    default:
        printf("Não é válido.\n");
        break;
    }
}