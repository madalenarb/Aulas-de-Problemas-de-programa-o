/*4. Escreva um programa para ler, separadamente, três caracteres correspondentes a dígitos decimais (algarismos) 
e escreva o dobro do número inteiro cujos algarismos são os caracteres lidos. */

#include <stdio.h>
#include <stdlib.h>

int main() {  
    char c1, c2, c3;
    printf("Insere 3 caracteres: ");
    scanf("%c %c %c", &c1, &c2, &c3);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("valores %d %d %d\n", 2 * c1, 2 * c2, 2 * c3); 
    

    return 0;
}

