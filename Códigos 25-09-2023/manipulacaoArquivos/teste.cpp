#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct {
    string matricula;
    string nome;
    string email;
} Participante;

void splitstr(string str, Participante &participante, string deli = ";") {
    int start = 0;
    int end = str.find(deli);
    
    if (end != -1) {
        participante.matricula = str.substr(start, end - start);
        start = end + deli.size();
        end = str.find(deli, start);

        if (end != -1) {
            participante.nome = str.substr(start, end - start);
            start = end + deli.size();
            participante.email = str.substr(start);
        }
    }
}

int main() {
    const int numParticipantes = 3;
    Participante vetor[numParticipantes];

    ifstream procuradorArquivo;
    procuradorArquivo.open("teste.dat");

    if (!procuradorArquivo.is_open()) {
        cout << "Arquivo não localizado. Programa encerrado." << endl;
        return 1;
    }

    string linha;
    int contador = 0;

    while (getline(procuradorArquivo, linha) && contador < numParticipantes) {
        splitstr(linha, vetor[contador]);
        contador++;
    }

    procuradorArquivo.close();

    // Agora, o vetor contém os dados dos participantes
    for (int i = 0; i < contador; i++) {
        cout << "Matrícula: " << vetor[i].matricula << endl;
        cout << "Nome: " << vetor[i].nome << endl;
        cout << "Email: " << vetor[i].email << endl;
    }

    return 0;
}
