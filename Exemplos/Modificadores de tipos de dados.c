#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* int: -2,147,483,648 a 2,147,483,647; 
unsigned int: 0 a 4,9,294,967,267,295;
char: -128 a 127;
unsigned char: 0 a 255. */
/*
int main (){
	
	int numeroSinal = 3000000000; // este valor excede o limite
	unsigned int numeroSemSinal = 3000000000;
	
	printf("numero com Sinal: %d\n", numeroSinal);
	printf("Número sem sinal: %u\n", numeroSemSinal);
	
	return 0;
	
}	
*/
/*
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
    
}

*/
int main() {
	
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
    unsigned long int largePositiveNumber = 4000000000;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
 	printf("Número positivo grande: %lu\n", largePositiveNumber);
    return 0;
    
}
