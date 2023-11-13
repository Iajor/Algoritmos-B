/*
SISTEMA DE GESTÃO DE EMPRÉSTIMOS DE CHAVE
PRÉDIO
-LAB101;1(predio)
-LAB102;2
-LAB108
-LAB109
-LAB203
-LAB311
-LAB315
-LAB316

FUNCIONÁRIO
ALEXANDRE ZAMBERLAN
PROFESSOR/ADMINISTRATIVO
FONE

ALUNO
GUILHERME FERNANDES
FONE

AUTORIZAÇÃO
LAB101;ALEXANDRE ZAMBERLAN
LAB101;GUILHERME FERNANDES
*/


#include <iostream>
#include <fstream>
#include <string>


using namespace std;

#include "util.h"
#include "structs.h"

int main(){
    int totalFuncionarios=

    
    ofstream procuradorArquivo;
    procuradorArquivo.open("autorizacoes.dat", ios::out | ios::app);
    procuradorArquivo.close();
    
    do{
       system("cls");
       int opcao;
       exibirMenu(&opcao);
       system("pause");
    } while (true);
    
    

    return 1;
}

