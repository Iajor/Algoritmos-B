//4)Método que recebe dois anos, atual e nascimento, e devolve a idade. Sugestão: capturar o ano atual do SO

#include <iostream>
#include <time.h>

using namespace std;

#include "exers"


int main(){
    int nascimento;
    
    cout << "Informe o ano de nascimento\n";
    cin >> nascimento;

    cout << "Idade -> " << idade(nascimento) << endl;

}