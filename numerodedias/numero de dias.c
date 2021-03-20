#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    do
    {
        printf("Introduza um número entre 1 e 12, correspondendo a um mês do ano: ");
        scanf("%d", &n);

        switch(n)
        {
    case 1 :
            printf("\nTem 31 dias\n");
            break;
    case 2 :
            printf("\nTem 29 dias\n");
            break;
    case 3 : 
            printf("\nTem 31 dias\n");
            break;
    case 4 :
            printf("\nTem 30 dias\n");
            break;
    case 5 :
            printf("\nTem 31 dias\n");
            break;
    case 6 :
            printf("\nTem 30 dias\n");
            break;
    case 7 :
            printf("\nTem 31 dias\n");
            break;
    case 8 :
            printf("\nTem 31 dias\n");
            break;
    case 9 :
            printf("\nTem 30 dias\n");
            break;
    case 10 :
            printf("\nTem 31 dias\n");
            break;
    case 11 :
            printf("\nTem 30 dias\n");
            break;
    case 12 :
            printf("\nTem 31 dias\n");
            break;
    default:
        printf("Número Inválido! Tem de ser entre 1 e 12\n");
        break;
        } 
    } while ( n >= 1 && n <= 12 );
    
    return 0;
}