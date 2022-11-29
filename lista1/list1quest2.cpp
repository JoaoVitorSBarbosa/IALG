#include <stdio.h>
#include <stdlib.h>

using namespace std;

int horas;
float sal_min, sal_real;
int main (){
    scanf("%f",&sal_min);
    scanf("%d",&horas);
    
    sal_real = (0.05*sal_min*horas)-(0.05*sal_min*horas*0.23);

    printf("%.2f \n",sal_real);
    return 0;
}