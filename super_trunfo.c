#include <stdio.h>

int main() {

// Variáveis carta 1
    char estado1;                //Estado em (char)
    char codigo1 [4];            // Código da carta (string com espaço para 3 caractéres + '\0' )
    char nomeCidade1 [20];       // Nome da Cidade com até 19 caracteres
    int populacao1;              // População em números inteiros (int)
    float area1;                 //Área em km² (float)
    float pib1;                  // Pib em milhões (float)         
    int pontosTuristicos1;       // Número de pontos turísticos (int
    double densidadeDemografica1;   //Cálculo da desnidade demográfica = população/km²
    double pibPerCapta1;              // calcula o Pib Per Capta e converte de milhões para reais

// Variáveis carta 2
    char estado2;                //Estado em (char)
    char codigo2 [4];            // Código da carta (string com espaço para 3 caractéres + '\0' )
    char nomeCidade2 [20];       // Nome da Cidade com até 19 caracteres
    int populacao2;              // População em números inteiros (int)
    float area2;                 //Área em km² (float)
    float pib2;                  // Pib em milhões (float)         
    int pontosTuristicos2;       // Número de pontos turísticos (int)
    double densidadeDemografica2;   //Cálculo da desnidade demográfica = população/km²
    double pibPerCapta2;              // calcula o Pib Per Capta e converte de milhões para reais


    //solicita que o usuário digite os dados das cartas para cadastro
    // Entrada de dados da carta 1

    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");    
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex:A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o Nome da Cidade (uma palavra apenas): ");
    scanf(" %19s", nomeCidade1);
    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);
    printf("Digite a Area (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (milhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    printf("\n");

    //Entrada de dados da carta 2

    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A-H):");    
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%3s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %19s", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (milhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");
   

    // Cálculos carta 1
    densidadeDemografica1 = (float)populacao1 / area1;
    pibPerCapta1 = pib1 * 1000000 / populacao1;

    // Cálculos carta 2
    densidadeDemografica2 = (float)populacao2 / area2;
    pibPerCapta2 = pib2 * 1000000 / populacao2;

    

    //saida dos cados cadastrados de forma organizada

    //saída dos dados da carta 1

    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f milhões de reais\n", pib1);
    printf("Número de Pontos Túristicos: %d\n", pontosTuristicos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica1);
    printf("PIB Per Capta: %.2f reais\n", pibPerCapta1);
    printf("================\n\n");

    //saida dos dados da carta 2

    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Túristicos: %d\n", pontosTuristicos2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidadeDemografica2);
    printf("PIB Per Capta: %.2f reais\n", pibPerCapta2);    
    printf("================\n\n");

    return 0;




}