#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float milis,horas,minutos,segundos; 

int main (){
    
    scanf("%f",&milis);

    horas=floor(milis/3600000);
    milis=milis-(horas*3600000);
    minutos=floor(milis/60000);
    milis=milis-(minutos*60000);
    segundos=milis/1000;
    milis=milis-(minutos*1000);

    printf("%.0f : %.0f : %.1f \n", horas,minutos,segundos);

    return 0;
}