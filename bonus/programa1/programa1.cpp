#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

void ordenaValores(float* valor1, float* valor2) {
	if (*valor1 < *valor2) { //valor 2 é maior
		float aux = *valor2;
		*valor2 = *valor1;
		*valor1 = aux;
		//cout << "Valor 2 maior" << endl;
	}
}

float pegaMenor (float valor1, float valor2) {
	if (valor1 > valor2) {
		return valor2;
	}else {
		return valor1;
	}
	return -1;

}
float pegaMaior(float valor1, float valor2) {
	if (valor1 < valor2) {
		return valor2;
	}else {
		return valor1;
	}
	return -1;
}
int main () {
	float valor1, valor2, metros = 0;
	string nomeArquivo, linha;
	fstream arquivo;
	cin >> nomeArquivo;
	
	arquivo.open(nomeArquivo.append(".txt"), ios::in);
	int contadorLinhas = 0;
	string linhas[3];	
	while (!arquivo.eof() && contadorLinhas < 3) {
		getline (arquivo, linhas[contadorLinhas]);
		cout << linhas[contadorLinhas] << endl;
		contadorLinhas++;
	}
	arquivo.close();	
	
	valor1 = stof(linhas[0]);
	valor2 = stof(linhas[1]);
	metros = stof(linhas[2]);
	ordenaValores(&valor1, &valor2);
	//cout << valor1 << " " << valor2 << endl;

	//float maior = pegaMaior(valor1, valor2);
	//float menor = pegaMenor(valor1, valor2);

	//cout << maior << " " << menor << endl;
	int numCortes = lround(valor2/7); 
	float altura = valor2/numCortes;
	cout << altura << endl;
	float numPecas = valor2/numCortes;
	float comprimentoTotal = valor1 * numPecas;
	float saida = ((metros/valor1) / numPecas) * (valor2 * valor1);
	cout << saida << endl;



	return 0;
}
