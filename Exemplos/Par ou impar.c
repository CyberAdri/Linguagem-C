#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <stdio.h>

// Fun��o principal
int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }

    return 0;
}

	

