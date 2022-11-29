#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float altura, altura_alc, degraus;
int main (){
    
    scanf("%f",&altura);
    scanf("%f",&altura_alc);
    
    degraus = (altura_alc*100)/altura;

    printf("%.0f \n", ceil(degraus));
    return 0;
}