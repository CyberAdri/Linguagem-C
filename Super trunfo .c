#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define TAN 50

struct cartapais{
	char estado [TAM];
	char cidade [TAN];
	float populacao;
	int npontosturisticos;
	float area;
	float PIB;
};

typedef struct  cartapais cartapais;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
 	cartapais pes = {"","", 0, 0, 0.0, 0.0};

	printf("\n Jogo Trunfo \n");
	printf("\n Vamos começar!!! \n");
	sleep(2);
		printf("\n Mas antes... pegue as suas cartas do jogo e insira as informações abaixo. \n");
	sleep (4);
	printf("\n Digite o estado que consta na sua carta.\n",pes.estado);
		scanf("%s", &pes.estado);
		
	printf ("\n Digite a cidade que aparece na sua carta. \n", pes.cidade);
		scanf("%s", &pes.cidade);
		
	fflush(stdin);	
	
	printf("\n Digite a quantidade de população, que consta na sua carta.\n",pes.populacao);
		scanf("%f", &pes.populacao);
		
	printf("\n Ótimo, agora digite o número de pontos turisticos, que consta na sua carta. %c \n",pes.npontosturisticos);
		scanf("%d", &pes.npontosturisticos);
		
	printf("\n Digite a área da cidade, que consta na sua carta. \n",pes.area);
		scanf("%f", &pes.area);
		
	printf("\n Digite o PIB, que consta na sua carta. \n",pes.PIB);
		scanf("%f", &pes.PIB);
		
	
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
	
	printf("\nestado: %s \n",pes.estado);
	printf("cidade: %s \n",pes.cidade);
	printf("populacao: %f \n",pes.populacao);
	printf("pontos turisticos: %d \n",pes.npontosturisticos);
	printf("area: %f \n",pes.area);
	printf("PIB: %f \n",pes.PIB);
	
	return 0;
}
