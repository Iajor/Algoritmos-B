//7) método que recebe a sigla de um estado brasileiro e retorna o nome do estado por completo
#include <iostream>
#include <string>
using namespace std;
#define TAM 54 

string paraMaiusculoStringComRetorno(string frase) {
    for (int i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

string obterEstadoPorSigla(const string& sigla) {
    string lista[TAM] = {
        "AC", "Acre", "AL", "Alagoas", "AP", "Amapa", "AM", "Amazonas", "BA", "Bahia",
        "CE", "Ceara", "DF", "Distrito Federal", "ES", "Espirito Santo", "GO", "Goias",
        "MA", "Maranhao", "MT", "Mato Grosso", "MS", "Mato Grosso do Sul", "MG", "Minas Gerais",
        "PA", "Para", "PB", "Paraiba", "PR", "Parana", "PE", "Pernambuco", "PI", "Piaui",
        "RJ", "Rio de Janeiro", "RN", "Rio Grande do Norte", "RS", "Rio Grande do Sul",
        "RO", "Rondonia", "RR", "Roraima", "SC", "Santa Catarina", "SP", "Sao Paulo",
        "SE", "Sergipe", "TO", "Tocantins"
    };

    for (int i = 0; i < TAM; i += 2) {
        if (sigla == lista[i]) {
            return lista[i + 1];
        }
    }

    return "Sigla de estado inválida";
}

int main() {
    string sigla;

    cout << "Informe a sigla:\n";
    getline(cin, sigla);

    string siglaMaiusculo = paraMaiusculoStringComRetorno(sigla);

    string nomeEstado = obterEstadoPorSigla(siglaMaiusculo);
    cout << "Nome do estado: " << nomeEstado << endl;

    return 1;
}
