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
    for(int i=0;i<n-1;i++){
        if (vetor[i].valorMedicao>vetor[i+1].valorMedicao){
            temp=vetor[i];
            vetor[i]=vetor[i+1];
            vetor[i+1]=temp;
        }
    }
}
