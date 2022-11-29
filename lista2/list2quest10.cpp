#include <iostream>

using namespace std;

int numero,parcount,imparcount;
string cor1,cor2;

int main (){
    cin >> cor1;
    cin >> cor2;

    if(cor1 == cor2){
        cout << cor1 << endl;

    }else if(((cor1 == "azul")&&(cor2 == "vermelho"))||((cor1 == "vermelho")&&(cor2 == "azul"))){ //azul
        cout << "violeta" << endl;
    }else if(((cor1 == "azul")&&(cor2 == "amarelo"))||((cor1 == "amarelo")&&(cor2 == "azul"))){ //azul
        cout << "verde" << endl;
    }else if(((cor1 == "vermelho")&&(cor2 == "amarelo"))||((cor1 == "amarelo")&&(cor2 == "vermelho"))){ //azul
        cout << "laranja" << endl;
    } 

    return 0;
}