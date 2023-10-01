#include "util.h"
#include <fstream>

void inicializarVetorParticipante(Participante vetor[], int n){
    for (int i=0;i<n;i++){
        vetor[i].matricula = "";
        vetor[i].nome = "";
        vetor[i].email = "";
    }
}

void exibirMenu(){
    cout << "Menu:\n1-Fazer inscrição no evento.\n2-Registrar a entrada no evento.\n3-Registrar a saida do evento.\n4-Encerrar programa.\nOpcao:" << endl;
    cin >> opcao;
 
}

bool jaInscrito(string matricula, Participante vetor[], int n){
    for (int i = 0;i < n; i++){
        if (vetor[i].matricula == matricula){
            return true;
        }
    }
    return false;
}

void adicionarInscritoVetor(Participante vetor[], int n, string matricula, string nome, string email){
    for (int i = 0;i < n; i++){
        if(vetor[i].matricula == ""){
            vetor[i].matricula = matricula;
            vetor[i].nome = nome;
            vetor[i].email = email;
            break;
        }
    }
}
void adicionarInscritoArquivo(string matricula, string nome, string email){
    ofstream procuradorArquivo;
	procuradorArquivo.open("inscritos.csv", ios::out | ios::app);

    procuradorArquivo << matricula << ";" << nome << ";" << email << endl;

    procuradorArquivo.close();
}
void fazerInscricao(Participante vetor[], int n){
    string matricula, nome, email;

    if (n == TAM){
        cout << "Evento lotado" << endl;
        return;
    }

    cout << "Informe a matricula:" << endl;
    cin >> matricula;
    if (jaInscrito(matricula, vetor, n)){
        cout << "Matricula ja inscrita no evento\n";
        return;
    }
    cout << "Informe o nome completo:" << endl;
    cin >> nome;
    cout << "Informe o e-mail:" << endl;
    cin >> email;

    nome=paraMaiusculoStringComRetorno(nome);
    email=paraMaiusculoStringComRetorno(nome);
    adicionarInscritoVetor(vetor, n, matricula, nome, email);
    
}





void conexaoBase(Participante vetor[]){
    for (int i=0;i<100;i++){
        vetor[i].matricula = "";
        vetor[i].nome = "";
        vetor[i].email = "";
    }

    ifstream procuradorArquivo;
    procuradorArquivo.open("inscritos.csv")

    string linha;
    while(!procurador.eof()){
        getline
    }
    string s = "codigo;jogador;selecao;quantidade;especial;preco"; // Take any string with any delimiter 
    string vetor[6];
    split(vetor, s, ";");
    for (int i = 0; i < 6; i++) {
        cout << vetor[i] << endl;
    }
}


