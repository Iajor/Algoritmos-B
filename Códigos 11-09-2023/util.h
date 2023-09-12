void inicializarVetorVeiculo(Veiculo vetor[], int n){
    for (int i=0;i<n;i++){
        vetor[i].placa = "";
        vetor[i].horaEntrada = "";
    }
}

int entrarGaragem(Veiculo vetor[], int n, int quantidadeCarros){
    string placa, hora;
    bool carroLocalizado;

    

    cout << "Cadastro de veiculo\n";

    if (quantidadeCarros == n){
        cout << "Garagem lotada";
    }else{
        while(true){
            cout << "Informe a placa em maiusculo ";
            cin >> placa;
            if (placa.length() == 7){
                break;
            }else{
                cout << "Digite uma placa valida\n";
            }
            
        }
        cout << "O carro entrou em " << endl;
       
        carroLocalizado=false;
        for (int i=0;i<n;i++){
            if (placa == vetor[i].placa) {
                cout << "Carro ja esta registrado\n";
                carroLocalizado=true;
                break;
            }
        }
        if (!carroLocalizado){
            for (int i=0;i<n;i++){
                if (vetor[i].placa == ""){
                    vetor[i].placa = placa;
                    vetor[i].horaEntrada = hora;
                    quantidadeCarros++;
                    cout << "Carro cadastrado\n";
                    break;
                }
            }
        }
    }
    return quantidadeCarros;
}

void listarGaragem(Veiculo vetor[], int n, int quantidadeCarros){

    cout << "Listagem de veiculos\n";
        if (quantidadeCarros==0){
            cout << "Garagem vazia\n";
        }else{
            for (int i=0;i<n;i++){
                if (vetor[i].placa != ""){
                    cout << "Placa: " << vetor[i].placa << endl;
                    cout << "Hora de entrada: " << vetor[i].horaEntrada << endl;
                }
            }
        }
}

int sairGaragem(Veiculo vetor[], int n, int quantidadeCarros){
    string placa, hora;
    bool carroLocalizado;
    
    cout << "Saida de Veiculo\n";

    if (quantidadeCarros == 0){
        cout << "Garagem vazia\n";
    }else{
        while(true){
            cout << "Informe a placa em maiusculo ";
            cin >> placa;
            if (placa.length() == 7){
                break;
            }else{
                cout << "Digite uma placa valida\n";
            }
            
        }

        carroLocalizado=false;
        for (int i=0;i<n;i++){
            if (placa == vetor[i].placa) {
                vetor[i].placa = "";
                vetor[i].horaSaida = "";
                vetor[i].horaEntrada = "";
                quantidadeCarros--;
                carroLocalizado=true;
                
                break;
            }
        }
        if (!carroLocalizado){
            cout << "Carro nao localizado na garagem\n";
        }else{
            
            cout << "O carro saiu em " <<  endl;
            cout << "Tempo de estadia: ";
        }
       
    }
    return quantidadeCarros;
}
