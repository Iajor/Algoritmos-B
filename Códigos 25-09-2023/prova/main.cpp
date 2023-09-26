/* Avaliação: fazer um código de gerenciamento de entradas e saidas de um evento, com manipulação de arquivos como uma base de dados
Com um menu:
1-Fazer inscrição no evento:
typedef struct{
    string matricula;
    string nomeCompleto;
    string email;
}Participante;
2-Listar inscritos:

3-Registrar a entrada:
-verificar se a matricula está inscrita no arquivo inscritos e não no entradas. Registrar a matricula e hora;

4-Registrar a saida:
-verificar se a matricula está inscrita no arquivo entradas e não no arquivo saidas. Registrar a matricula e hora;

5-sair
*/

#include <iostream>
#include <string>
#include <time.h>

#define TAM 50

using namespace std;

#include "metodos.h"
#include "structs.h"




int main(){

    Participante vetor[TAM];
    inicializarVetorParticipante(vetor, TAM)
 
    exibirMenu(vetor, TAM);

    
    return 1;
}