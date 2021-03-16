#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159265358979323846
#define g 9.8

double check_angle(double dist, double v0);
double convert_rad_to_degrees(double angle);
double max_d(double d, double c);
double min_d(double d, double c);

int main(){

    double v0, dist, min, max;
    double c = 0;

    printf("Insere a distância ao balde: ");
    scanf("%lf", &dist);

    printf("Insere o diâmetro do cesto: ");
    scanf("%lf", &c);
    
    printf("\nInsere a velocidade inicial: ");
    scanf("%lf", &v0);

    max = max_d(dist,c);
    min = min_d(dist,c);

    convert_rad_to_degrees(max);
    convert_rad_to_degrees(min);

    if(max > 90 || min > 90 || c >= dist){
        printf("Não é válido\n\n");
    } else {
            printf("\nEntre os ângulos %fº e %fº.\n\n", min, max);
    }
    return 0;
} 

double convert_rad_to_degrees(double angle)
{
    double x = (angle * 180) / pi; 

    return x;
}

double check_angle(double dist, double v0)
{
    double angle = (1/2) * ( asin( (dist * g) / (v0 * v0) ));
    
    return angle;
}

double min_d(double d, double c){
    double r = c / 2;
    d -= r;
    return d;
}

double max_d(double d, double c){
    double r = c / 2;
    d += r;
    return d;
}