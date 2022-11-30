#include <iostream>
#include <string>

using namespace std;

int main () {
    //vetor 2x2x3
    const int linhas = 2;
    const int colunas = 2;
    const int profundidade = 3;
    bool posisao2d[9];
    int numero = 0;
    int cont = 0;

    int*** arrayPt = new int**[linhas];

    for (unsigned int i = 0; i< linhas; i++) {
        arrayPt[i] = new int*[colunas];
        
        for (unsigned int j = 0; j < colunas; j++) {
            arrayPt[i][j] = new int[profundidade];
        }   
    }

    for (unsigned int i = 0; i < linhas; i++) {
        for (unsigned int j = 0; j < colunas; j++) {
            for (unsigned int k = 0; k < profundidade; k++) {
                cin >> arrayPt[i][j][k];
            }
        }
    }

    cin >> numero;

    // for (unsigned int i = 0; i < linhas; i++) {
    //     for (unsigned int j = 0; j < colunas; j++) {
    //         for (unsigned int k = 0; k < profundidade; k++) {
    //             cout << arrayPt[i][j][k] << " ";
    //         }
    //         cout << " || ";
    //     }
    //     cout << endl;
    // }
    for (unsigned int i = 0; i < linhas; i++) {
        for (unsigned int j = 0; j < colunas; j++) {
            for (unsigned int k = 0; k < profundidade; k++) {
                if (arrayPt[i][j][k] == numero) {
                    cout << i << " " << j << " " << k << endl;
                }else {
                    cont++;
                }
            }
        }
    }
    //cout << cont;
    if (cont >= (linhas*colunas*profundidade))  
        cout << -1 << endl;

    for (unsigned int i = 0; i < linhas; i++) {
        for (unsigned int j = 0; j < colunas; j++) {
           delete[] arrayPt[i][j];
        }
        delete[] arrayPt[i];
    }
    delete[] arrayPt;
    return 0;
}