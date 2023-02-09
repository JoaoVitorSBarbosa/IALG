#include <iostream>
using namespace std;

int main (){
	int linhas, colunas = 0;
	char letra = 'a';
	cin >> linhas;
	while (linhas > 27){
		cout << "numero invalido" << endl;
	        cin >> linhas;	
	
	} 
	
	for (int i=0; i<linhas; i++){
		for (int j=0; j<colunas; j++){
			cout << letra << " ";
			letra++;
		}
		letra = 'a';
		colunas ++;
		cout << endl;
	}

	return 0;
}
