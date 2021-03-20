#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char c;
    printf("Insira a frase: ");

    while (scanf("%c", &c) != EOF)
    {   if (c >= 'a' && c <= 'z')
    {
    
        printf("%c", toupper(c));
        } else {
            printf("\n\n");
            return 0;
        }
    }
    
}