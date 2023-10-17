/*Sistema criptomoeda

menu

1 cadastrar
    nome
    sigla
    valor em dólares
    
2 atualizar
    sigla(atualizar a unidade)
    
3 remover
    sigla

4 listar

5 sair*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


typedef struct {
    string nome;
    string sigla;
    string valor;
       
} CriptoMoeda;

#include "metodos.h"

int main(){
    CriptoMoeda *moeda = nullptr;
    
    const string nomeArquivo = "cripto.csv";
    int tamanho = qtdBase(nomeArquivo) + 100;

    vetor = (CriptoMoeda*)malloc(sizeof(CriptoMoeda) * tamanho);
    
  
   
    return 1;
}