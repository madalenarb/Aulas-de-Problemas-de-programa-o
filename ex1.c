#include <stdio.h>
#include <stdlib.h>


int main()
{

    // Definição e inicialização das variáveis
    //tempo em segundos inserido
    long tempo = 0;

    //horas
    int horas = 0;

    //parte dos minutos em segundos
    int min0 = 0;

    //minutos
    int min = 0;

    //segundos
    int seg = 0;

    printf("Insira o tempo em segundos (numero inteiro): ");
    scanf("%d", &tempo);

    horas = tempo / 3600;

    min0 = tempo - (horas * 3600);
    min = min0 / 60;

    seg = tempo - ( ( min * 60 ) + ( horas * 3600 ) );

    printf("%d : %d : %d\n\n", horas, min, seg);

    return 0;
}
