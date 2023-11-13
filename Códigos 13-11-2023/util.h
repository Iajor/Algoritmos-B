void exibirMenu(int *opcao){

    cout << "Menu\n1-Cadastrar sala/predio\n2-Cadastrar funcionario\n3-Cadastrar aluno\n4-Autorizar retirada\n5-sair\nOpcao:" << endl;
    cin >> *opcao;
}

void conexaoBaseFuncionario(Funcionario *funcionario, int *totalFuncionarios){

    ifstream procuradorArquivo("funcionarios.csv");
    int contador = 0;
    string linha;

    while (getline(procuradorArquivo, linha)) {
        contador++;
    }

    procuradorArquivo.close();
    return contador;

}
    ifstream procuradorArquivo;
    procuradorArquivo.open("funcionarios.csv");
    if (!procuradorArquivo){
        return contador;
    }
    int contador=0;
    
    for (int i=0;i<100;i++){
        funcionario[i]nome. = "";
        funcionario[i].cargo = "";
        funcionario[i].fone= "";
    }
int conectarBase(Participante vetor[], int n) {
    ifstream procuradorArquivo; //tipo de arquivo para leitura
    int totalInscritos = 0;

    for (int i = 0; i < n; i++) {
        vetor[i].matricula = "";
        vetor[i].nome = "";
        vetor[i].email = "";
    }
    procuradorArquivo.open("inscritos.csv"); 

    if (!procuradorArquivo) {        
        return totalInscritos;
    }
   		
 
	//le o arquivo capturando as frases
	string linha;
	while (!procuradorArquivo.eof()) {
		getline(procuradorArquivo,linha); //lendo a linha inteira
		string vetor_linha[3];
        split(vetor_linha,linha,";");

		vetor[totalInscritos].matricula = vetor_linha[0];
        vetor[totalInscritos].nome = vetor_linha[1];
        vetor[totalInscritos].email = vetor_linha[2];
        totalInscritos++;
	}

	procuradorArquivo.close();
    return totalInscritos;
}
    ifstream procuradorArquivo;
    procuradorArquivo.open("funcionarios.csv")

    string linha;
    while(!procurador.eof()){
        getline(procurador, linha);
    }
    string s = "codigo;jogador;selecao;quantidade;especial;preco"; // Take any string with any delimiter 
    string vetor[6];
    split(vetor, s, ";");
    for (int i = 0; i < 6; i++) {
        cout << vetor[i] << endl;
    }
}


void split(string vetor[], string str, string deli = " ") {        
    int start = 0;
    int end = str.find(deli);
    int i = 0;
    while (end != -1) {
        vetor[i] = str.substr(start, end - start);
        i++;
        start = end + deli.size();
        end = str.find(deli, start);
    }
    vetor[i] = str.substr(start, end - start);
}

string paraMaiusculo(string frase) { //para C++ como passagem de parametro por valor
    int i;
    for (i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}
