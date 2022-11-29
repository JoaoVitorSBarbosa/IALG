#include <stdio.h>
#include <stdlib.h>

float sald,cred;

int main (){
    scanf("%f",&sald);

    if(sald<0){
        cred = 0;
    }else if ((sald>=0)&&(sald<200)){
        cred = sald*0.1;
    }else if ((sald>=200)&&(sald<400)){
        cred = sald*0.15;
    }else if ((sald>=400)&&(sald<800)){
        cred = sald*0.20;
    }else if ((sald>=800)&&(sald<1600)){
        cred = sald*0.25;
    }else{
        cred = sald*0.30;
    }

    printf("%.2f \n",sald);
    printf("%.2f \n",cred);

    return 0;
}