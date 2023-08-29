//5) método que recebe um vetor com números inteiro e retorna o maior valor do vetor
#include <iostream>

using namespace std;
#define TAM 10
#include "exers"


int main(){

    int vetor[TAM];
    cout << "Informe os numeros do vetor\n";

    populaVetor(vetor);
        
    cout << "Maior elemento -> " << maior(vetor) << endl;


    return 1;
}