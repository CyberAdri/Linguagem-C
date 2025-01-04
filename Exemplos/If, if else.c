#include <stdio.h>

int main (void){
	
	float nota;
	scanf(" %f", &nota);
	printf("%.1f \n", nota);
	if (nota >= 5)
		printf("Parabens voce foi aprovado\n");
	if (nota < 5)
		printf("Nao foi desta vez, mas nao desista!");
	
	return 0;
}
