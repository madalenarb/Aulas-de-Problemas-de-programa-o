#include <stdio.h>
#include <stdlib.h>

#define radiowaves 3000000000
#define microwaves 3000000000000
#define infraredLight 4300000000000000
#define visibleLight 7500000000000000 
#define ultravioletLight 3000000000000000000
#define xRays 300000000000000000000


int main(){
    long long a;
    printf("Insere um número inteiro: ");
    scanf("%lld", &a);
    if(a < radiowaves){
        printf("Radio Wave");
    } else if(a < microwaves) {
        printf("Microwaves");
    } else if (a < infraredLight){
        printf("Infrared");
    } else if(a < ultravioletLight){
        printf("Ultraviolet Light");
    } else if(a < xRays){
        printf("xRays");
    } else {
        printf("GammaRay");
    }
}