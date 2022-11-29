#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float caravelas,homens;
int main (){
    
    scanf("%f",&homens);
    if(homens>1000){
        caravelas = ceil((homens-1000)/80);
    }else{
        caravelas = 0;
    }
    printf("%.0f \n", caravelas);
    return 0;
}