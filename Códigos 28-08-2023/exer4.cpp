//4)Método que recebe dois anos, atual e nascimento, e devolve a idade. Sugestão: capturar o ano atual do SO

#include <iostream>
#include <time.h>

using namespace std;

#include "exers"

struct tm pegaDataHora() {
        time_t t = time(NULL);
        return *localtime(&t);
    }

    
int idade(int numero){
    int idade;
    struct tm dataAtual=pegaDataHora();
    idade=(dataAtual.tm_year+1900)-numero;

    return idade;
}

int main(){
    int nascimento;
    
    cout << "Informe o ano de nascimento\n";
    cin >> nascimento;

    cout << "Idade -> " << idade(nascimento) << endl;

}