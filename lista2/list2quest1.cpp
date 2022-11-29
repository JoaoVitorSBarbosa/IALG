#include <stdio.h>
#include <stdlib.h>

int divisor, dividendo, result, resto;

int main (){
    
    scanf("%d",&dividendo);
    scanf("%d",&divisor);

    if(divisor !=0){
        result = (dividendo / divisor);
        resto = (dividendo % divisor);

        printf("%d \n",result);
        printf("%d \n",resto);
    }else {
        printf("erro \n");
    }
    return 0;
}