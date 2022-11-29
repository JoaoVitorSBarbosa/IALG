#include <iostream> 
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

char cor1[20],cor2[20];
int numero,n1,n2,n3,n4;

int main (){
    scanf("%s",&cor1);
    scanf("%s",&cor2);
    scanf("%d",&numero);
    
    n1=numero/100000;
    n2=(numero/10000)%10;
    n3=(((((numero/10)%10000)%1000)%100)%10);
    n4=(((((numero%10)%10000)%1000)%100)%10);

    if((n1 == n4)&&(n2 == n3)){
        printf("%s \n", cor1);
    }else {
        printf("%s \n", cor2);
    }

    return 0;
}