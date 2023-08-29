//6) método que recebe dois vetores de números inteiros e mostra os números que aparecem tanto no primeiro, quanto no segundo vetor.

#include <iostream>
using namespace std;
#define TAM 5
#include "exers"


int main(){
    int vetor1[TAM], vetor2[TAM];

    populaVetor(vetor1);
    populaVetor(vetor2);

    comum(vetor1, vetor2);
    
}
