#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float xum, yum, xdois, ydois, m, q; 

int main (){
    
    scanf("%f",&xum);
    scanf("%f",&yum);
    scanf("%f",&xdois);
    scanf("%f",&ydois);

    m=(ydois-yum)/(xdois-xum);
    q=yum-(m*xum);

    printf("%f \n", m);
    printf("%f \n", q);

    return 0;
}