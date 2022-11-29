#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float xum, yum, xdois, ydois; 
float subx, suby, quadx, quady, dist;
int main (){
    
    scanf("%f",&xum);
    scanf("%f",&yum);
    scanf("%f",&xdois);
    scanf("%f",&ydois);

    subx = xdois - xum;
    suby = ydois - yum;

    quadx=subx*subx;
    quady=suby*suby;

    dist=sqrt(quadx+quady);

    printf("%.5f \n", dist);

    return 0;
}