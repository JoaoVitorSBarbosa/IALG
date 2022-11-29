#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dinheiro,n100,n50,n20,n10,n5,n2,n1,resto;
int main (){
    
    scanf("%d",&dinheiro);

    n100=floor(dinheiro/100);
    dinheiro=dinheiro-(n100*100);
    n50=floor(dinheiro/50);
    dinheiro=dinheiro-(n50*50);
    n20=floor(dinheiro/20);
    dinheiro=dinheiro-(n20*20);
    n10=floor(dinheiro/10);
    dinheiro=dinheiro-(n10*10);
    n5=floor(dinheiro/5);
    dinheiro=dinheiro-(n5*5);
    n2=floor(dinheiro/2);
    dinheiro=dinheiro-(n2*2);
    n1=floor(dinheiro);
    
    printf("%d \n", n100);
    printf("%d \n", n50);
    printf("%d \n", n20);
    printf("%d \n", n10);
    printf("%d \n", n5);
    printf("%d \n", n2);
    printf("%d \n", n1);

    return 0;
}