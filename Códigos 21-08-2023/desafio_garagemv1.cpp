/*Desafio de gestão de garagem
    - usar: struct, vetor[TAM], rotinas
    - não usar: métodos/módulos próprios

    Menu:
    1 - entrar na garagem (deve ter controle de duplicidade);
    2 - lista carros (mostrar placa, data e hora de entrada);
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
    string placa[7];
    string horaEntrada[5];

}Veiculo;

int main(){
    Veiculo vetor[TAM];
    int opcao;
    
    do
    {
        system("cls");
        cout << "MENU:\n1 - Entrar na garagem\n2 - Listar veiculos\n3 - Remover da garagem\n4 - Sair do sistema\nOpcao:";
        cin >> opcao;

        switch (opcao){
        case 1:
            cout << "Cadastro de veiculo\n";
            
            break;
        
        case 2:
            cout << "Listagem de veiculos\n";
            break;

        case 3:
            cout << "Retirade de veiculon";
            break;

        case 4:
            break;
        
        default:
            cout << "Opcao invalida";
            break;
        }

    } while (opcao != 4);
    


    return 1;
}