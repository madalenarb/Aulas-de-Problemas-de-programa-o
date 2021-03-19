#include <stdio.h>
#include <stdlib.h>

int main(){
    //inicializar as variáveis 
    //variáveis que correspondem à hora
    int hora1 = 0;
    int hora2 = 0;
    int hora = 0;

    //variáveis que correspondem aos minutos
    int min1 = 0;
    int min2 = 0;
    int min = 0;

    //variáveis que correspondem aos segundos
    int seg1 = 0;
    int seg2 = 0;
    int seg = 0;

    //variáveis que correspondem ao tempo em segundos
    int tempo1 = 0;
    int tempo2 = 0;
    int tempo = 0;

    printf("Insira 2 tempos(no formato [horas] [minutos] [segundos]): \n Insira o maior dos tempo: ");
    scanf("%d %d %d", &hora1, &min1, &seg1);

    printf("Insira o menor dos tempos: ");
    scanf("%d %d %d", &hora2, &min2, &seg2);
    tempo1 = (hora1 * 3600) + (min1 * 60) + seg1;
    tempo2 = (hora2 * 3600) + (min2 * 60) + seg2;
    if (tempo1 > tempo2 && hora1 < 23 && hora2 < 23 && min1 < 60 && min2 < 60 && seg1 < 60 && seg2 < 60)
    {
        tempo = tempo1 - tempo2;
        hora = tempo/3600;
        min = (tempo - (hora * 3600))/60;
        seg = (tempo - min * 60 - hora*3600);
        printf("O resultado é: %d %d %d", hora, min, seg);
        
    } else if (hora1 > 23 && hora2 > 23){
        printf("As horas têem que estar entre 0 e 23.");
    } else if(min1 > 60 && min2 > 60){
        printf("Os minutos têem que estar entre 0 e 60.");
    } else if(seg1 > 60 && seg2 > 60){
        printf("Os segundos têem que estar entre 0 e 60.");
    } else {
        printf("O tempo 1 tem de ser maior que o tempo 2.");
    }
    return 0;
}
