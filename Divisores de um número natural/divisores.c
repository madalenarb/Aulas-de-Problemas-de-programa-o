#include <stdio.h>
#include <stdlib.h>


int main(){
    int x = 0;
    int i = 0;
    int sum = 0;
    int a = 0;

    printf("Insira um número natural: ");
    scanf("%d", &x);

    for(i = 1; i <= x; i++){
        if((x%i) == 0){
            printf("%d ", i);
            sum += i;
            a++;
        }
    } 
    float avrg = sum / a;
    printf("\n A média é %.3f. \n", avrg);
}