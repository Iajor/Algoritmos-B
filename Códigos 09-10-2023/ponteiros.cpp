/*MENU
1-cadastrar
2-listar
3-atualizar
4-deletar
5-sair
*/

#include <iostream>
#include <string>

using namespace std;


void deletar(string *vetor, int *qtdInseridos){
    if(*qtdInseridos == 0){
        cout << "vazio" << endl;
        return;
    }
    string nome;
    cout << "nome a deletar:" << endl;
    getline(cin, nome);
    for (int i = 0; i < *qtdInseridos; i++){
        if(nome==vetor[i]){
            
            cout << "nome deletado" << endl;
            *qtdInseridos-=1;
            return;
        }else{
            cout << "nome nao inserido" << endl;
            return;
        }
    
    }

}

void atualizar(string *vetor, int qtdInseridos){
    if(qtdInseridos == 0){
        cout << "vazio" << endl;
        return;
    }
    string nome;
    cout << "nome a atualizar:" << endl;
    getline(cin, nome);
    for (int i = 0; i < qtdInseridos; i++){
        if(nome==vetor[i]){
            string novo;
            cout << "novo nome" << endl;
            getline(cin, novo);
            vetor[i]=novo;
            return;
        }else{
            cout << "nome nao inserido" << endl;
            return;
        }
    
    }
}

void listar(string *vetor, int qtdInseridos){
    if (qtdInseridos == 0){
        cout << "vazio" << endl;
        return;
    }
    cout << "listar" << endl;
    for (int i = 0; i < qtdInseridos; i++){
        cout << vetor[i] << endl;
    }
}

void cadastrar(string *vetor, int *qtdInseridos, int tamanho){
    if (*qtdInseridos == tamanho){
        cout << "cheio" << endl;
        return;
    }
    cout << "cadastrar" << endl;
    string nome;
    cout << "nome: " << endl;
    getline(cin, nome);
    vetor[*qtdInseridos] = nome;
    *qtdInseridos += 1;
}

void menu(string *vetor, int *qtdInseridos, int tamanho){
    int op;
    do
    {
        system("cls");
        cout << "1-cadastrar\n2-listar\n3-atualizar\n4-deletar\n5-sair\nopcao:" << endl;
        cin >> op;
        fflush(stdin);
        switch (op)
        {
            case 1:
                cadastrar(vetor, qtdInseridos, tamanho);
                break;
            
            case 2:
                listar(vetor, *qtdInseridos);
                break;

            case 3:
                atualizar(vetor, *qtdInseridos);
                break;

            case 4:
                deletar(vetor, qtdInseridos);
                break;

            case 5:
                return;

            default:
                cout << "opcao invalida" << endl;
                break;
        }
        system("pause");
    } while (true);
    
}

int main(){
    string *vetor;
    int tamanho;
    int qtdInseridos = 0;
    
    cout << "Quantos nomes?" << endl;
    cin >> tamanho;

    vetor = (string*)malloc(sizeof(string) * tamanho);
    menu(vetor, &qtdInseridos, tamanho);





    return 1;
}