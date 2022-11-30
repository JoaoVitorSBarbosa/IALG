#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

bool vogalVerify (char letra) {
    bool status = false;
    if ((letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')) {
        status = true;
    }else {
        status = false;
    }
    return status;
}
int main () {
    int id = 4444;
    int codigo = 4444;
    int pos = 12;
    string fab = "ApleAplee";
    string descricao = "Acabate banana";
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << "||------------------------------------------------------------------------------------------------------||\n";
    cout << "|| ID\t\t|"<<" Codigo\t|"<<" Fabricante\t|" <<" Ano\t|"<<" Descricao\t\t\t|" << " Posicao\t||" <<endl;
    cout << "||\t\t|\t\t|\t\t| \t|\t\t\t\t|\t\t||" << endl;
    cout << "||------------------------------------------------------------------------------------------------------||\n";
	printf ("||%8d",id);
    printf ("%6s|"," ");
    printf ("%8d",codigo);
    printf ("%7s|"," ");
    printf (" %-14s",fab.c_str());
    printf ("|");
    printf ("%6d",codigo);
    printf ("%1s|"," ");
    printf (" %-30s|",descricao.c_str());
    printf ("%8d",pos);
    printf ("%7s||\n"," ");
    cout << "||------------------------------------------------------------------------------------------------------||\n";
    cout << "||\t\t|\t\t|\t\t| \t|\t\t\t\t|\t\t||" << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    return 0;
}