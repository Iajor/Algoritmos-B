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

#include "structs.h"
#include "util.h"

int main(){

    Veiculo vetor[TAM], carroRetirada;
    inicializarVetorVeiculo(vetor, TAM);
    int opcao;
    string placa, hora;
    int quantidadeCarros = 0;
    bool carroLocalizado;
    
    do{
        system("cls");
        cout << "MENU:\n1 - Entrar na garagem\n2 - Listar veiculos\n3 - Remover da garagem\n4 - Sair do sistema\nOpcao:";
        cin >> opcao;
        
        switch (opcao){
        case 1:
            cout << "Cadastro de veiculo\n";
            if (quantidadeCarros == TAM){
                cout << "Garagem lotada";
            }else{

                while(true){
                    cout << "Informe a placa em maiusculo ";
                    cin >> placa;
                    if (placa.length() == 7){
                        break;
                    }else{
                        cout << "Digite uma placa valida\n";
                    }
                    
                }
                while(true){
                    cout << "Informe a hora de entrada no formato HH:MM ";
                    cin >> hora;
                    if (hora.length() == 5){
                        break;
                    }else{
                        cout << "Digite uma hora valida\n";
                    }
                    
                }
                carroLocalizado=false;
                for (int i=0;i<TAM;i++){
                    if (placa == vetor[i].placa) {
                        cout << "Carro ja esta registrado\n";
                        carroLocalizado=true;
                        break;
                    }
                }
                if (!carroLocalizado){
                    for (int i=0;i<TAM;i++){
                        if (vetor[i].placa == ""){
                            vetor[i].placa = placa;
                            vetor[i].horaEntrada = hora;
                            quantidadeCarros++;
                            cout << "Carro cadastrado\n";
                            break;
                        }
                    }
                }
            }
            break;
        case 2:
            cout << "Listagem de veiculos\n";
            if (quantidadeCarros==0){
                cout << "Garagem vazia\n";
            }else{
                for (int i=0;i<TAM;i++){
                    if (vetor[i].placa != ""){
                        cout << "Placa: " << vetor[i].placa << endl;
                    }
                }
            }

            break;

        case 3:
            
            string placaRetirada;
            int confirmacao;
            cout << "Retirada de veiculo\n";
            if (quantidadeCarros==0){
                cout << "Garagem vazia\n";
            }else{
               
                
                
                                       
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