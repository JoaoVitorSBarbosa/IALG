#include <iostream>
#include <string>

using namespace std;

struct aluno {

    int matricula;
    string nome;
};

void binarySch(aluno alunos[],unsigned int numero, unsigned int quantidade) {
        unsigned int pivo, indexMaior, indexMenor;
        pivo = 0;
        indexMenor = 0;
        indexMaior = quantidade-1;
        pivo = quantidade/2;
        // for (int i = 0; i < quantidade; i++) {
        //     cout << alunos[i].matricula << endl;
        // }
        while (indexMaior >= indexMenor) {
            pivo = ((indexMaior+indexMenor)/2);
            if ((alunos[pivo].matricula == numero)) {
                cout << alunos[pivo].matricula << endl;
                cout << alunos[pivo].nome << endl;
                return;
            }else if ((alunos[pivo].matricula < numero)) {
                indexMenor = pivo+1;
            }else {
                indexMaior = pivo-1;
            }
            cout << alunos[pivo].matricula << endl;
        }
    return;
}
int main () {
    unsigned int quantidade;
    unsigned int matriculaDesejada;
    cin >> quantidade;
    aluno alunos[quantidade];

    for (unsigned int i = 0; i < quantidade; i++) {
        cin >> alunos[i].matricula >> alunos[i].nome;
    }
    cin >> matriculaDesejada;
    binarySch(alunos,matriculaDesejada,quantidade);
    return 0;
}