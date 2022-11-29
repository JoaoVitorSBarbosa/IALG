#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
float nproduto, ncaixa;

int main(){

    scanf("%f", &nproduto);

    ncaixa = ceil(nproduto/6);

    printf("%.0f \n", ncaixa);
    return 0;
}