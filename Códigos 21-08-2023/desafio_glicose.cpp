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
 #define TAM 1000000

 #include "structs.h"
 #include "util.h"

 int main(){

    Medicao vetor[TAM];
    inicializarVetorMedicao(vetor, TAM);
    int opcao, medicao, quantidadeMedicoes=0, media=0, mediana=0;
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
                
                break;
            case 2:
                cout << "Listagem de medicoes\n";
                if (quantidadeMedicoes==0){
                    cout << "Sem registros\n";
                }else{
                    for (int i=0;i<TAM;i++){
                        if (vetor[i].data != ""){
                            cout << "Data: " << vetor[i].data << endl << "Hora: " << vetor[i].hora << endl << "Medicao: " << vetor[i].valorMedicao << endl;
                        }
                    }
                }

                break;

            case 3:
                cout << "Calcular e mostrar media e mediana";
                

                for(int i = 0;i<quantidadeMedicoes;i++){
                    media+=vetor[i].valorMedicao;
                }
                if (quantidadeMedicoes % 2 == 1){
                    mediana=(quantidadeMedicoes+1)/2;
                }else{
                    mediana=((quantidadeMedicoes/2+1)+(quantidadeMedicoes/2+1))/2;
                }
                cout << "A media das medicoes eh: " << media/quantidadeMedicoes << endl;
                cout << mediana;
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