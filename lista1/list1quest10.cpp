#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
float dist, vel;

int main(){

    scanf("%f", &dist);

    vel = 14.6*sqrt(dist);

    printf("%.3f \n", vel);
    return 0;
}