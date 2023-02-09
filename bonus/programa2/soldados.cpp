#include <iostream>

using namespace std;

int main () {
	int numSoldados, numFilas, contFilas = 0;
	cin >> numSoldados;
	while (contFilas < numSoldados) {
		numSoldados = numSoldados - contFilas;
		contFilas++;
	}
	cout << contFilas << endl;
	cout << numSoldados << endl;
	return 0;
}
