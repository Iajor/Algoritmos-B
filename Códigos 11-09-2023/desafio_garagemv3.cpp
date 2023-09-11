/*Desafio de gestão de garagem
    - usar: struct, vetor[TAM], rotinas
    - não usar: métodos/módulos próprios

    Menu:
    1 - entrar na garagem (deve ter controle de duplicidade); V
    2 - lista carros (mostrar placa, data e hora de entrada); V
    3 - sair da garagem (remover carro e reorganizar o vetor);
    4 - sair;
    opção:

    Estrutura:
    - string placa[7] (usuário deve digitar em maiúsculo)
    - string hora[5] (usuário deve digitar no formato hh:mm)
*/
#include <iostream>
#include <string>


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
    int opcao;
    int quantidadeCarros = 0;

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

            cout << "Retirada de veiculo\n";
            if (quantidadeCarros == 0){
                cout << "Garagem vazia\n";
            }else{
                string placaRetirada;
                bool placaEncontrada = false;
                cout << "Informe a placa a ser retirada:\n";
                cin >> placaRetirada;
                for (int i;i<TAM;i++){
                    if (placaRetirada==listaVeiculos[i].placa){
                        placaEncontrada=true;
                        break;
                    }
                    cout << placaEncontrada;
                    if (placaEncontrada){
                        listaVeiculos[i].placa.erase(i);
                        cout << "Placa retirada\n";
                        quantidadeCarros--;
                    }
                }

            }
                
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