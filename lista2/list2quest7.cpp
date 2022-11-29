#include <stdio.h>
#include <stdlib.h>
#include <cctype>

int tipo; 
float valor;

int main (){
    scanf("%d",&tipo);
    scanf("%f",&valor);

    if(tipo == 2){
        valor = (valor + (valor*0.03))-30;
        printf("%.2f \n",valor);
    }
    if(tipo==1){
        valor = valor + (valor*0.005);
        printf("%.2f \n",valor);
    }
    return 0;
}