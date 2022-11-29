#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dinheiro,compra,n20,n10,n5,n2,n1,troco;
int main (){
    
    scanf("%d",&dinheiro);
    scanf("%d",&compra);

    troco = dinheiro-compra;
    
    n20=floor(troco/20);
    troco=troco-(n20*20);
    n10=floor(troco/10);
    troco=troco-(n10*10);
    n5=floor(troco/5);
    troco=troco-(n5*5);
    n2=floor(troco/2);
    troco=troco-(n2*2);
    n1=floor(troco);
    
    printf("%d \n", n20);
    printf("%d \n", n10);
    printf("%d \n", n5);
    printf("%d \n", n2);
    printf("%d \n", n1);

    return 0;
}