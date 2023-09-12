#include <iostream>
#include <string>
#include <ctime>

#define TAM 10

using namespace std;

typedef struct {
    string placa;
    string horaEntrada;
    string horaSaida;
}Veiculo;


#include "util.h"

int main(){

    Veiculo listaVeiculos[TAM];
    inicializarVetorVeiculo(listaVeiculos, TAM);
    int opcao, quantidadeCarros = 0;

    do{
        system("cls");
        cout << "MENU:\n1 - Entrar na garagem\n2 - Listar veiculos\n3 - Remover da garagem\n4 - Sair do sistema\nOpcao:";
        cin >> opcao;
        
        switch(opcao){
        case 1:
            quantidadeCarros = entrarGaragem(listaVeiculos, TAM, quantidadeCarros);
            break;
        case 2:
            listarGaragem(listaVeiculos, TAM, quantidadeCarros);
            break;

        case 3:
            quantidadeCarros = sairGaragem(listaVeiculos, TAM, quantidadeCarros);
            break;

        case 4:
            break;
        
        default:
            cout << "Opcao invalida";
            break;
        }
        system("pause");
    } while (opcao != 4);
    


   
}