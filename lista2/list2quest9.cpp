#include <stdio.h>
#include <stdlib.h>

int numero,parcount,imparcount;
int numeros[4];

int main (){
    scanf("%d",&numero);


        numeros[0]=numero/10000;
        numeros[1]=(numero/1000)%10;
        numeros[2]=((numero/100)%100)%10;
        numeros[3]=(numero%100)/10;
        numeros[4]=(numero)%10;

        for (int i = 0; i < 5; i++)
        {
           if((numeros[i] % 2)==0){
               parcount++;
           }else {
               imparcount++;
           }
        }
        printf("%d \n",parcount);
        printf("%d \n",imparcount);

    return 0;
}