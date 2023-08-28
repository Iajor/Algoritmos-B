//8) método que recebe uma data (dd/mm/aaaa) e retorna se é válida ou não
#include <iostream>

using namespace std;

bool validaData(int dia, int mes, int ano){
    if (dia<1 || dia>31 || mes<1 || mes>12 || ano<1990 || ano>2023){
        return false;
    }

    return true;
}



int main (){
    int dia, mes, ano;

    do
    {
        cout << "Dia: \n";
        cin >> dia;
        cout << "Mes: \n";
        cin >> mes;
        cout << "Ano: \n";
        cin >> ano;

        if (validaData(dia,mes,ano)){
            cout << "Data valida\n";
            break;
        }else{
            cout << "Data invalida. Redigite..\n";
        }
    } while (true);
    

    return 1;
}