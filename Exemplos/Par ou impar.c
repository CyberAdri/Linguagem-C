#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <stdio.h>

// Função principal
int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}

	

