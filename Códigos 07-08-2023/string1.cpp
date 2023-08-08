#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    string frase;

    system("cls");

    cout << "Digite uma palavra: ";
    getline(cin, frase);

    cout << "Foi digitada a palavra: " << frase << endl;
    cout << "A frase possui " << frase.length() << " caracteres\n";

    for (int i = 0; i < frase.length();i++){
        frase[i]=toupper(frase[i]);
    }

    cout << "A frase em maiúsculo: " << frase << endl;

    string outra_palavra;
    cout << "Digite uma palavra de pesquisa: ";
    getline(cin, outra_palavra);

    if (frase.find(outra_palavra)){
        cout << outra_palavra << " foi encontrado na frase\n";
    }

}