/*Desafio da glicose 
    Estrutura
        string data
        string hora
        int valorMedicao

    Menu
        1 - Cadastrar medição (medida, hora e data);
        2 - Lista medições;
        3 - Calcular e mostrar média e mediana;
        4 - Sair;
        opção:

    Obs: validar a medida da glicemia (10 a 600)
*/
#include <iostream>
#include <string>

using namespace std;
#define TAM 100

#include "structs.h"
#include "util.h"


int main(){

Medicao vetor[TAM];
inicializarVetorMedicao(vetor, TAM);
int opcao, medicao, quantidadeMedicoes=0;
string data, hora;

    do{
        system("cls");
        cout << "MENU:\n1 - Cadastrar medicao\n2 - Listar medicoes\n3 - Calcular e mostrar media e mediana\n4 - Sair do sistema\nOpcao:";
        cin >> opcao;
        
        switch (opcao){
            case 1:
                cout << "Cadastro de medicao\n";
                
                
                while(true){
                    cout << "Informe o valor da medicao ";
                    cin >> medicao;
                    if (medicao<10 || medicao>600){
                        cout << "Digite uma medicao valida entre 10 e 600\n";
                    }else{
                        break;
                    }
                    
                }
                while(true){
                    cout << "Informe a data da medicao no formato dd/mm/aaaa ";
                    cin >> data;
                    if (data.length() == 10){
                        break;
                    }else{
                        cout << "Digite uma data valida\n";
                    }
                    
                }
                while(true){
                    cout << "Informe a hora da medicao no formato HH:MM ";
                    cin >> hora;
                    if (hora.length() == 5){
                        break;
                    }else{
                        cout << "Digite uma hora valida\n";
                    }
                    
                }
                for (int i=0;i<TAM;i++){
                    if (vetor[i].data == ""){
                        vetor[i].data = data;
                        vetor[i].hora = hora;
                        vetor[i].valorMedicao = medicao;
                        quantidadeMedicoes++;
                        cout << "Medicao registrada\n";
                        break;
                        }
                    }
                fflush(stdin);
                break;
            case 2:
                cout << "Listagem de medicoes\n";
                if (quantidadeMedicoes==0){
                    cout << "Sem registros\n";
                }else{

                    ordenadaLista(vetor, quantidadeMedicoes);
                    
                    for (int i=0;i<quantidadeMedicoes;i++){
                        if (vetor[i].data != ""){
                            cout << "Data: " << vetor[i].data << endl << "Hora: " << vetor[i].hora << endl << "Medicao: " << vetor[i].valorMedicao << endl;
                        }
                    }
                }

                break;

            case 3:
                           

                cout << "Calcular e mostrar media e mediana\n";
                if (quantidadeMedicoes!=0){
                    int media=0;
                    for (int i=0;i<quantidadeMedicoes;i++){
                        media=media+vetor[i].valorMedicao;
                        
                    }
                                                   
                    media=media/quantidadeMedicoes;      
                    cout << "Media das medicoes -> " << media << endl;

                    int mediana = 0;
                    if (quantidadeMedicoes == 1){
                        cout << "Mediana -> " << vetor[0].valorMedicao << "\n";
                    }
                    else if (quantidadeMedicoes == 2){
                        cout << "Mediana -> " << (vetor[0].valorMedicao+vetor[1].valorMedicao)/2 << "\n";
                    }
                    else if (quantidadeMedicoes % 2 == 1){
                        mediana=(quantidadeMedicoes)/2;
                        cout << "Mediana -> " << vetor[mediana].valorMedicao << "\n";
                    }
                    else{
                        int valor1, valor2;
                        valor1=quantidadeMedicoes/2;
                        valor2=valor1-1;
                        cout << "Mediana -> " << (vetor[valor1].valorMedicao+vetor[valor2].valorMedicao)/2 << "\n";
                    }
                    
                }
                else{
                    cout << "Sem registros\n";
                    break;                       
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


    return 1;


}