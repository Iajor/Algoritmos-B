#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define TAM 10

main(){
	setlocale(LC_ALL,"portuguese");
	
	int opcao, i, vetor[TAM];
	char nome[200];
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);   
  	data_hora_atual = localtime(&segundos);
   
	do{
		
		system("cls");
		printf("1-Digite nome\n");
		printf("2-Sorteie n�mero\n");
		printf("3-Capture data e hora\n");
		printf("4-Popula e exibe vetor\n");
		printf("5-Sair\n");
		printf("Opc�o:");
		scanf("%i",&opcao);
		fflush(stdin);
		
		switch(opcao){
			case 1: printf("Nome:"); 
			gets(nome); 
			printf("Voc� digitou %i\n", strlen(nome));
			break;
			case 2: srand(time(NULL));
			printf("N�mero: %i\n", rand()%20); 
			break;
			case 3: printf("Data/Hora: ");
			printf("\nHora ........: %d:",data_hora_atual->tm_hour);   
		  	printf("%d:",data_hora_atual->tm_min);
		  	printf("%d\n",data_hora_atual->tm_sec);  
		    printf("\nData ........: %d/", data_hora_atual->tm_mday);
		 	printf("%d/",data_hora_atual->tm_mon+1);
			printf("%d\n\n",data_hora_atual->tm_year+1900); 
			break;
			case 4: srand(time(NULL));
			for(i=0;i<TAM;i++){
				vetor[i]=rand()%50;
				printf("%i\t", vetor[i]);
			}
			printf("\n");
			break;
			case 5:
			default: printf("Opc�o inv�lida\n"); break;
		}
		system("pause");
	}while(opcao!=5);			
}
