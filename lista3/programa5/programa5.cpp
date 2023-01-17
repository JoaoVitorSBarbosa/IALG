#include <iostream>

using namespace std;

int tamanho = 5;
int numero, contTrans, posicao = 0;
int* arr = new int[tamanho];

void copiaValores(arr[], newArr[]) {
    for (int i = 0; i < tamanho - 5; i++){
        newArr[i] = arr[i];
    }
}

int main() {

    cin >> numero;
    while (numero > 0){
        arr[posicao] = numero;
        posicao++;
        if (posicao = tamanho){
            contTrans++;
            tamanho = tamanho + 5;
            int* newArr = new int[tamanho];
            copiaValores(arr, newArr);
            delete[] arr;
            int* arr = new int[tamanho];
            copiaValores(newArr, arr);
            delete[] newArr;
        }
        cin >> numero;
    }
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " " << endl;
    }
    cout << tamanho << endl;
    cout << contTrans << endl;
    delete[] arr;
    return 0;
}