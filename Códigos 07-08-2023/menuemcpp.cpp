#include <iostream>
#include <ctime>
#include <string>

#define TAM 5

using namespace std;

int main(){
    //cria 
    string vetor[TAM];
    string nome_temp;

    system("cls");

    int gerados=0;
    bool cadastrado;

    for (int i = 0;i<TAM; i++){
        do{
            cout << "Digite um nome: ";
            getline(cin,nome_temp);
            fflush(stdin);
            cadastrado=false;

            for(int j=0;j<gerados;j++){
                if(nome_temp==vetor[j]){
                    cadastrado=true;
                    cout << "Cadastrado\n";
                    break;
                }
            }
        }while(cadastrado);
        vetor[i]=nome_temp;
        gerados++;
    }

        
    //ordena 
    bool houve_troca;
    string aux;
    do{
        houve_troca=false;
        for(int i =0;i<TAM - 1;i++){
            if (vetor[i]>vetor[i+1]){
                houve_troca=true;
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }                
        }
    }while(houve_troca);

    
    for(int i=0;i<TAM;i++){
        cout << vetor[i] << "\n";
    }
}