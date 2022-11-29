#include <stdio.h>
#include <stdlib.h>
#include <cctype>

char letra;
int main (){
    scanf("%c",&letra);

    if(tolower(letra) == letra){
        printf("MINUSCULA \n");
    }else{
        printf("MAIUSCULA \n");
    }
    return 0;
}