#include <stdio.h>
#include <stdlib.h>

float alt, pes_id;
char gen;

int main (){
    
    scanf("%c",&gen);
    scanf("%f",&alt);

    if(gen == 'M'){

        pes_id = (72.7 * alt) - 58;

        printf("%.3f \n",pes_id);

    }else if (gen == 'F'){
        
        pes_id = (62.1 * alt) - 44.7;
        printf("%.3f \n",pes_id);

    }else{
        printf("Genero Errado");
    }
    return 0;
}