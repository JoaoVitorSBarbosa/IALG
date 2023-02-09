#include <iostream> 

using namespace std;

bool itsPrimo(int numero) {
	if (numero == 1) return true;
	if (numero == 0) return false;
	int cont = numero - 1;
	while ((numero%cont !=0 && cont > 1)) {	
		cont--;
	}
	if (cont == 1) {
		return true;
	}else {
		return false;
	}
	return false;

}
int main () {
	int N, M,cont = 0;
	cin >> N >> M;

	for (int i = N; i <= M; i++){
		if(itsPrimo(i)){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}
