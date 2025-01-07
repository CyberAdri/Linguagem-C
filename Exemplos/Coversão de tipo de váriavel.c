#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*aqui fa�o a jun��o de vetores, com la�o de repeti��o e condicional. 
Para um exercicio proposto que solicita : criar um programa em C que calcula a m�dia de tr�s notas inseridas pelo usu�rio. 
Utilizaremos vari�veis para armazenar as notas, operadores matem�ticos para somar e calcular a m�dia, e operadores de atribui��o para atualizar valores.
*/

int soma(int v[], int tam) {
	
	if(tam == 0)
		return 0;
		
	else	
		return v[tam - 1] + soma(v, tam - 1);
	
}


int main() {
	
	int nota[3];
	int n;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (n=0; n <=2; n++) {
	
	printf("informe a sua nota:\n");
	scanf(" %d", &nota[n]);
	}
		
	printf("O resultado � %.2f \n", (float)soma(nota, 3) /3);

    return 0;
}



// Fun��o com dois tipos de variaveis para a soma, sendo intero "int", quebrado " float". convertendo Implicitamente
/*
int main() {
	
	int a = 10;
	float b = 3.5;
	float resultado = a+b;
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Resultado: %.2f\n", resultado);

   
    return 0;
}


// Abaixo estou for�ando a conta a ser transformada em float, convertendo explicitamento (casting)

int main() {
	
	int a = 10;
	int b = 3;
	float resultado = (float) a/b;
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("Resultado: %.2f\n", resultado);

   
    return 0;
}


Aqui a baixo aprendi a difultar e treinar a utiliza��o de if e else, e utilizar vetores.

int soma(int v[], int tam) {
	
	if(tam == 0)
		return 0;
		
	else	
		return v[tam - 1] + soma(v, tam - 1);
	
}


int main() {
	
	int nota[3] = {9,2,3};
	int n;
	
	setlocale(LC_ALL, "Portuguese");
		
	printf("O resultado � %d \n", soma(nota, 3));
	
    return 0;
}
*/
