#include <stdio.h>

int main() {

// Variáveis carta 1
    char estado1;                //Estado em (char)
    char codigo1 [4];            // Código da carta (string com espaço para 3 caractéres + '\0' )
    char nomeCidade1 [20];       // Nome da Cidade com até 19 caracteres
    int populacao1;              // População em números inteiros (int)
    float area1;                 //Área em km² (float)
    float pib1;                  // Pib em milhões (float)         
    int pontosTuristicos1;       // Número de pontos turísticos (int)

// Variáveis carta 2
    char estado2;                //Estado em (char)
    char codigo2 [4];            // Código da carta (string com espaço para 3 caractéres + '\0' )
    char nomeCidade2 [20];       // Nome da Cidade com até 19 caracteres
    int populacao2;              // População em números inteiros (int)
    float area2;                 //Área em km² (float)
    float pib2;                  // Pib em milhões (float)         
    int pontosTuristicos2;       // Número de pontos turísticos (int)

// Entrada de dados da carta 1

    printf("Cadastro da Carta 1:\n");           //solicita que o usuário digite os dados da carta
    printf("Digite o Estado (A-H): ");
    scanf(" %C", &estado1);
    printf("Digite o Código da Carta (ex:A01): ");
    scanf("%3s", codigo1);
    printf("Digite o Nome da Cidade (uma palavra apenas): ");
    scanf("%19s", nomeCidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (milhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

//Entrada de dados da carta 2

    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%3s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%19s", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (milhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


}