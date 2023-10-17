int qtdBase(string nome){
    ifstream procuradorArquivo(nome);
    int contador = 0;
    string linha;

    while (getline(procuradorArquivo, linha)) {
        contador++;
    }

    procuradorArquivo.close();
    return contador;
}

    


