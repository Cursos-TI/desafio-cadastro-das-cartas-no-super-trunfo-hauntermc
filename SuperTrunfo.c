#include <stdio.h>
#include <locale.h>  // Para usar setlocale
#include <string.h>

int main() {
    // Configura o locale para Portuguese_Brazil
    //declaração de variaveis da carta 1
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Desafio Super Trunfo!\n");
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //declaração de variaveis da carta 2

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Leitura de dados da carta 1
    printf("Insira os dados da carta 1:\n");
    printf("Estado (A-H): ");
    scanf("%c",&estado1);
    getchar();

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();

    printf("Nome da cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB(em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    //Leitura de dados da carta 2
    printf("Insira os dados da carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%c",&estado2);
    getchar();

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB(em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();
    
    //Exibição dos dados da carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //Exibição dos dados da carta 2

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}