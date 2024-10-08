#include <stdio.h>

int main (){
	
	int cadastrado, ativo, logado;
	char opcao;
	
	cadastrado = ativo = logado = 0;
	
	printf(" Deseja cadastrar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		cadastrado = 1;
		printf("\n Conta Cadastrada. \n");
	
	}
	printf("Deseja ativar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		ativo = 1;
		printf("\n Conta Ativa. \n");
		
	}
	printf("Deseja logar sua conta? S/N \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		logado = 1;
		printf("\n Conta logada. \n");
	}
	if ((cadastrado == 1) && ((ativo == 1) || (logado == 1))) {
	
		printf("\nSeja bem vindo \n");
	}   
	else {
		printf("\nAlgo deu errado.\n");
	}
}
