//2)Método que recebe uma frase e mostra quantas palavras existem na frase

#include <iostream>
#include <string>
#include "exers"
using namespace std;

int main(){
    string frase;

    cout << "Escreva uma frase: \n";
    getline(cin, frase);

    qtasPalavras(frase);
}