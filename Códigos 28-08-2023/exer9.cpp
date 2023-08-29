//9) método que recebe um vetor e o seu tamanhoanho. retorna o vetor inicializado com 0.

#include <iostream>
using namespace std;

// Função para inicializar um vetor com 0
void inicializaVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = 0;
    }
}

int main() {
    int tam;

    cout << "Informe o tamanho do vetor:\n";
    cin >> tam;

    int vetor[tam];

    inicializaVetor(vetor, tam);

    for (int i = 0; i < tam; i++) {
        cout << i << " -> " << vetor[i] << endl;
    }

    return 0;
}
