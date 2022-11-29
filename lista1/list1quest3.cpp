#include <stdio.h>
#include <stdlib.h>


float sal, sal_dol, sal_eur, sal_lib;
int main (){
    scanf("%f",&sal);
    
    sal_dol = (sal/2.13);
    sal_eur = (sal/2.84);
    sal_lib = (sal/3.34);

    printf("%.2f \n",sal_dol);
    printf("%.2f \n",sal_eur);
    printf("%.2f \n",sal_lib);
    return 0;
}