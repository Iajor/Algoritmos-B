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
        vetor[i].valorMedicao = 0;
    }
}