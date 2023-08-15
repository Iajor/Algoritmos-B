/**
 * Escreva um programa que faça o controle das informações relativas aos funcionários de uma determinada empresa. 
 * As informações que devem ser armazenadas são: NOME, SALÁRIO, CARGO, IDADE e SEXO. 
 * Defina a estrutura de dados e faça a leitura e exibição dos dados para um funcionário.
 */

#include <iostream>
#include <string>

using namespace std;

typedef struct {
        string nome;
        float salario;
        string cargo;
        int idade;
        string sexo;

    }Funcionario;


int main(){

    Funcionario funcionario;
    
    cout << "Informe o nome do funcionario:\n" ;
    getline(cin, funcionario.nome);
    fflush(stdin);
    cout << "Informe o cargo do funcionario:\n" ;
    getline(cin, funcionario.cargo);
    fflush(stdin);
    cout << "Informe o salario do funcionario:\n" ;
    cin >> funcionario.salario;
    fflush(stdin);
    cout << "Informe a idade do funcionario:\n" ;
    cin >> funcionario.idade;
    fflush(stdin);
    cout << "Informe o sexo do funcionario:\n" ;
    getline(cin, funcionario.sexo);
    fflush(stdin);
    
    cout << "Dados do funcionario:\n";
    cout << "Nome: " << funcionario.nome << endl;
    cout << "Cargo: " << funcionario.cargo << endl;
    cout << "Salario: " << funcionario.salario << endl;
    cout << "Idade: " << funcionario.idade << endl;
    cout << "Sexo: " << funcionario.sexo << endl;
    

}
