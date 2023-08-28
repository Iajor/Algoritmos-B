// procedimento => método sem retorno
// uso da palavra reservada void

#include <iostream>
#include <string>
using namespace std;

void romanosSemRetorno(int numero){
    string resposta;

    switch (numero)
    {
    case 1:
        resposta = "I"; // atribui uma string.
        break;
    
    default:
        break;
    }
    cout << resposta << " sem retorno" << endl;
    //método com mais de um tarefa, sem retorno para quem lhe chamou
}
string romanosComRetorno(int numero){
    string resposta;

    switch (numero)
    {
    case 1:
        resposta = "I"; // atribui uma string.
        break;
    
    default:
        break;
    }
    return resposta;
    //método com apenas um tarefa, com retorno para quem lhe chamou
}
int main(){ //retorna um inteiro
    system("cls");
    int numero=1;

    romanosSemRetorno(numero);
    cout << romanosComRetorno(numero) << " com retorno" << endl;

    return 1;
}