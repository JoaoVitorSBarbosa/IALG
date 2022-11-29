#include <stdio.h>
#include <stdlib.h>

float mat, cien, ling, red, hum;
int nota;

int main (){
    scanf("%f",&mat);
    scanf("%f",&cien);
    scanf("%f",&ling);
    scanf("%f",&red);
    scanf("%f",&hum);

    if(red>=200){
        nota=(((mat*3)+(cien*2)+(ling*2)+(red*2)+(hum*1))/10);
        printf("%d \n",nota);
    }else {
        printf("%d \n",-1);
    }
    return 0;
}