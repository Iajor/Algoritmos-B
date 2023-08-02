#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define TAM 10

int main() {
    setlocale(LC_ALL, "portuguese");
 
    int opcao, i, j, vetor[TAM], aux, num_criados=0, num_utilizados[51]={0}, indice;
    char nome[200];
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

    do {
        system("cls");
        printf("1-Digite nome\n");
        printf("2-Sorteie número\n");
        printf("3-Capture data e hora\n");
        printf("4-Popula e exibe vetor\n");
        printf("5-Sair\n");
        printf("Opcão:");
        scanf("%i", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                printf("Nome:");
                gets(nome);
                printf("Você digitou %i\n", strlen(nome));
                break;
            case 2:
                srand(time(NULL));
                printf("Número: %i\n", rand() % 20);
                break;
            case 3:
                printf("Data/Hora: ");
                printf("\nHora ........: %d:", data_hora_atual->tm_hour);
                printf("%d:", data_hora_atual->tm_min);
                printf("%d\n", data_hora_atual->tm_sec);
                printf("\nData ........: %d/", data_hora_atual->tm_mday);
                printf("%d/", data_hora_atual->tm_mon + 1);
                printf("%d\n\n", data_hora_atual->tm_year + 1900);
                break;
            case 4:
                srand(time(NULL));
                while (num_criados < TAM) {
                    indice = rand() % 50;
                    if (!num_utilizados[indice]) {
                        vetor[num_criados] = indice;
                        num_utilizados[indice] = 1;
                        num_criados++;
                    }
                }
                
                for (i = 0; i < TAM; i++) {
                    for (j = 0; j < TAM; j++) {
                        if (vetor[i] < vetor[j]) {
                            aux = vetor[j];
                            vetor[j] = vetor[i];
                            vetor[i] = aux;
                        }
                    }
                }
                
                for (i = 0; i < TAM; i++) {
                    printf("%i\t", vetor[i]);
                }

                printf("\n");
                break;
            case 5:
            default:
                printf("Opcão inválida\n");
                break;
        }
        system("pause");
    } while (opcao != 5);
    return 0;
}

