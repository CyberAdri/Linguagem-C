#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 4

struct cartapais{
	char estado [50];
	char cidade [50];
	float populacao;
	int npontosturisticos;
	float area;
	float PIB;
};

typedef struct  cartapais cartapais;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Jogo Trunfo \n");
	printf("\n Vamos começar!!! \n");
	sleep(2);
	printf("\n Mas antes... pegue as suas cartas do jogo e insira as informações abaixo.\n ");
	sleep(4);
		
	cartapais lista[TAM];
	int i;
	
	for (i=0;i<TAM;i++){
		printf("\n Digite o estado que consta na sua carta (%d): \n",i+1);
		puts("\nEstado:");
		scanf(" %50[^\n]", &lista[i].estado);
		fflush(stdin);	
	
		puts("\nCidade:");
		scanf("%50[^\n]", &lista[i].cidade);
		fflush(stdin);		
	
 		puts("\nQuantidade de população");
		scanf(" %f",&lista[i].populacao);
			fflush(stdin);
			
		puts("\nNúmero de pontos turisticos:");
		scanf(" %d",&lista[i].npontosturisticos);
		fflush(stdin);
		
		puts("\nÁrea da cidade");
		scanf(" %f",&lista[i].area);
			fflush(stdin);
			
		puts("\nDigite o PIB:");
		scanf(" %f",&lista[i].PIB);
			fflush(stdin);
	}	
	
	printf(" \n Atualizando dados\n ");
	sleep(3);
	printf(" \n Informações inseridas com sucesso, você inseriu ...\n ");
		fflush(stdin);
		sleep(2);
	printf(".");
	printf("..");
	printf("...");
		fflush(stdin);
	sleep(2);
		system("cls");
		
		puts(" Dados das cartas: \n");
		
	for(i=0;i<TAM;i++){
	printf("\n-----------Estado: %s------------- \n",lista[i].estado);
	printf("Cidade: %s \n",lista[i].cidade);
	printf("Populacao: %f \n",lista[i].populacao);
	printf("Pontos turisticos: %d \n",lista[i].npontosturisticos);
	printf("Área: %.2f \n",lista[i].area);
	printf("PIB: %f \n",lista[i].PIB);
}
	printf("---------------------------------------------\n");
	
	return 0;
}
