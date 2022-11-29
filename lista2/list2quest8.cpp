#include <stdio.h>
#include <stdlib.h>

int codigo, pais;
float peso, pesog, preco, imposto, precot, impostop;

int main (){
    scanf("%d",&codigo);
    scanf("%f",&peso);
    scanf("%d",&pais);

    pesog=peso*1000;
    
    switch (pais)
    {
    case 1:
        impostop = 0;
        break;
    case 2:
        impostop = 0.15;
        break;
    case 3:
        impostop = 0.25;
        break;
    default:
        impostop = 0;
        break;
    }
    if((codigo>=1)&&(codigo<=4)){
        preco=pesog*10;
        imposto=preco*impostop;
        precot=preco+imposto;
    }else if((codigo>=5)&&(codigo<=7)){
        preco=pesog*25;
        imposto=preco*impostop;
        precot=preco+imposto;
    }else if((codigo>=8)&&(codigo<=10)){
        preco=pesog*35;
        imposto=preco*impostop;
        precot=preco+imposto;
    }else{
        printf("erro \n");
    }

    printf("%.1f \n",pesog);
    printf("%.1f \n",preco);
    printf("%.1f \n",imposto);
    printf("%.1f \n",precot);

    return 0;
}