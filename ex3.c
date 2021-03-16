#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159265358979323846
#define g 9.8

double check_distance(double angle, double v0, double tecto);
double convert_graus_to_rad(double angle);
double check_tecto(double tecto, double v0, double angle);

int main(){

    int flag;
    double v0, d, tecto, angle;

    printf("Insere a altura do tecto: ");
    scanf("%lf", &tecto);

    printf("\nInsere o ângulo: ");
    scanf("%lf", &angle);
    
    printf("\nInsere a velocidade inicial: ");
    scanf("%lf", &v0);

    angle = convert_graus_to_rad(angle);
    flag = check_tecto(tecto, v0, angle);
    
    if (flag == 1)
    {
        d = check_distance(angle, v0, tecto);
        printf("\nO centro do cesto tem que estar a %lf metros de distância.\n\n", d);
    } else {
        printf("\nBate no tecto.\n\n");
    }
    return 0;
} 

double convert_graus_to_rad(double angle)
{
    double x = (angle * pi) / 180; 

    return x;
}

double check_distance(double angle, double v0, double tecto)
{
    double d = (v0 * v0 * sin(2 * angle)/g);
    
    return d;
}

double check_tecto(double tecto, double v0, double angle){
    double h = (v0 * v0 * sin(v0) *sin(v0) / (2 * g));
    int flag = 0;
    if (h < tecto){
        flag = 1;
    }

    return flag;
    
}