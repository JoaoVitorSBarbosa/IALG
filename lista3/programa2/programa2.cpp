#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int qtdePalavras = 0;
    const int numPrimo = 37;
    const int numInterio = 15;
    long hash, hashTotal;
    hash = 0;
    hashTotal = 0;
    cin >> qtdePalavras;
    string palavras[qtdePalavras];
    for (unsigned int i = 0; i < qtdePalavras; i++) {
        cin >> palavras[i];
    }
    for (unsigned int i = 0; i<qtdePalavras;i++) {
        hash = 0;
        for (unsigned j = 0; j < palavras[i].size(); j++) {
            hash = (numPrimo * hash + palavras[i][j]) % numInterio;
        }
        cout << hash<<endl;
        hashTotal += hash; 
    }
    cout << hashTotal<<endl;
    return 0;
}