#include <stdio.h>
#include <stdio.h>

int eprimo(int n);

int main(){
    int primo1, primo2;
    int n1 = 2;

    for(n1 = 0; n1 + 2 < 1000; n1++)
    {
        primo1 = eprimo(n1);
        primo2 = eprimo(n1 + 2);
        if (primo1 == 1)
        {
            if(primo2 == 1){
            printf("Primos casados: %d %d\n", n1, n1 + 2);
            }
        }
    }
    
}

int eprimo(int n){
        int primo;
        int aux = 2;
        while (n%aux != 0)
        {
            aux++;
        }
    if (n != aux)
    {
        primo = 0;
    } else {
        primo = 1;
    }
    return primo;
}