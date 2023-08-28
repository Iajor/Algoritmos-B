void inicializarVetorVeiculo(Veiculo vetor[], int n){
    for (int i=0;i<n;i++){
        vetor[i].placa = "";
        vetor[i].horaEntrada = "";
    }
}

void inicializarVetorMedicao(Medicao vetor[], int n){
    for (int i=0;i<n;i++){
        vetor[i].data = "";
        vetor[i].hora = "";
        vetor[i].valorMedicao;
    }
}

void ordenadaLista(Medicao vetor[], int n){
    Medicao temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (vetor[j].valorMedicao>vetor[i].valorMedicao){
            temp=vetor[j];
            vetor[j]=vetor[i];
            vetor[i]=temp;
            }
        }
    }
}