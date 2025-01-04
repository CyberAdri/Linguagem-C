#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
	int dia, mes, ano;
}DataNascimento;

typedef struct {
	
	DataNascimento dataNas;
	
	char nome[100], sexo;
	char rua[150];
	char cidade[100];
	int numero;
	
}Cadastro;

int main () {
	
		setlocale(LC_ALL, "Portuguese");
		
	Cadastro cadastro;

	printf("Digite o seu nome: \n");
	fgets(cadastro.nome,100,stdin);
		fflush(stdin);	
	
	printf("\nDigite o seu sexo, sendo f para feminino e m para masculino: \n");
	scanf("%c",&cadastro.sexo);
		fflush(stdin);	
	
	printf("\nDigite a rua onde mora: \n");
	scanf("%150[^\n]", &cadastro.rua);
	fflush(stdin);
	
		printf("\nDigite o número: \n");
	scanf(" %d", &cadastro.numero);
	
		fflush(stdin);
	printf("\nDigite a cidade/bairro: \n");
	scanf("%100[^\n]", &cadastro.cidade);
	fflush(stdin);
	
	
	printf("\nDigite a sua data de nascimento: \n");
	scanf("%d%d%d", &cadastro.dataNas.dia, &cadastro.dataNas.mes, &cadastro.dataNas.ano);
		fflush(stdin);	
	
	
	printf("\nVocê digitou:\n");
	printf("\nNome: %s\nSexo: %c\n", cadastro.nome, cadastro.sexo);
	printf("\nEndereço: %s, %s, %d.\n", cadastro.rua, cadastro.cidade, cadastro.numero);
	printf("\nData de Nascimento: %d/%d/%d", cadastro.dataNas.dia, cadastro.dataNas.mes, cadastro.dataNas.ano);

	return 0;


}
