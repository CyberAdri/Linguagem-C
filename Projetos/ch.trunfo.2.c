#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int populacao;
    int npontosturisticos;
    float area;
    float PIB;
    float densPopulacional;
    
} Cidade;

typedef struct {
    char nome[70];
    Cidade cidades[10]; // Suporte para até 10 cidades por estado
    int qtdCidades; // Quantidade de cidades cadastradas
} Estado;

void gerarCodigo(int estadocod, int cidadecod, char *codigo) {
    sprintf(codigo, "%c%02d", 'A' + estadocod, cidadecod + 1);
}

Estado lerEstado(int estadocod) {
    Estado est;
    est.qtdCidades = 1; // Define a quantidade de cidades fixada pelo programador

    printf("\nDigite o nome do estado %c: \n", 'A' + estadocod);
    fgets(est.nome, 70, stdin);
    est.nome[strcspn(est.nome, "\n")] = '\0'; // Remove o '\n'

    return est;
}

Cidade lerCidade(int cidadecod) {
    Cidade cid;
    

    printf("\nDigite o nome da cidade %d:\n ", cidadecod + 1);
    fgets(cid.nome, 50, stdin);
    fflush(stdin);
    cid.nome[strcspn(cid.nome, "\n")] = '\0'; // Remove o '\n'

    printf("\nDigite a quantidade populacional: \n");
    scanf("%d", &cid.populacao);
    fflush(stdin);
    printf("\nDigite o número de pontos turísticos:\n ");
    scanf("%d", &cid.npontosturisticos);
    fflush(stdin);;
    printf("\nDigite a área da cidade:\n ");
    scanf("%f", &cid.area);
    fflush(stdin);
    printf("\nDigite o PIB da cidade:\n ");
    scanf("%f", &cid.PIB);
    fflush(stdin);
   
cid.densPopulacional = (cid.populacao/cid.area);
    return cid;
}

void imprimirEstado(Estado est, int estadocod) {
    printf("\n\tEstado %c: %s\n\n", 'A' + estadocod, est.nome);
}

void imprimirCidade(Cidade cid, char *codigo) {
	
    printf("\n\tCidade [%s]: %s\n", codigo, cid.nome);
    printf("\n\tPopulação: %d\n", cid.populacao);
    printf("\n\tPontos turísticos: %d\n", cid.npontosturisticos);
    printf("\n\tÁrea: %.2f\n", cid.area);
    printf("\n\tPIB: %.2f\n", cid.PIB);
    
printf("\nA Densidade Populacional é : (%f) pessoas/km² \n\n", cid.densPopulacional+1); // incluso a soma da densidade após o usuário inserir as informações.//
	
}

int main() {

    Estado estados[2];
    int i, c;
    setlocale(LC_ALL, "Portuguese");
    
	
    // Leitura de estados e cidades
    for (i = 0; i < 2; i++) {
        estados[i] = lerEstado(i);

        for (c = 0; c < estados[i].qtdCidades; c++) {
            estados[i].cidades[c] = lerCidade(c);
           	
        }
    }

    // Impressão de estados e cidades com códigos
    system("cls");


    for (i = 0; i < 2; i++) {
        imprimirEstado(estados[i], i);

        for (c = 0; c < estados[i].qtdCidades; c++) {
            char codigo[10];
            gerarCodigo(i, c, codigo);
            imprimirCidade(estados[i].cidades[c], codigo);
          
        }
        printf("  ------------------------------------\n");
    }

    return 0;
}
