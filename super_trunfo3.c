#include <stdio.h>
#include <string.h>

int main() {
    // Informações da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Informações da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    //Nome do jogo anunciado
    printf("**Jogo: SUPER TRUNFO DE CARTAS!**\n");

    // Entrada de dados carta 1
    printf("\nDigite os dados da primeira carta:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados carta 2
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Saída de informações
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Cálculo de densidade populacional
    float densidadePopulacional1 = (float)populacao1 / area1;
    printf("\nDensidade Populacional da Cidade 1: %.2f hab/km²\n", densidadePopulacional1);

    float densidadePopulacional2 = (float)populacao2 / area2;
    printf("Densidade Populacional da Cidade 2: %.2f hab/km²\n", densidadePopulacional2);

    // Cálculo de PIB per capita
    float pibPercapita1 = pib1 / populacao1;
    printf("\nPIB per capita da Cidade 1: %.2f\n", pibPercapita1);

    float pibPercapita2 = pib2 / populacao2;
    printf("PIB per capita da Cidade 2: %.2f\n", pibPercapita2);

    // Cálculo do Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + (1 / densidadePopulacional1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1 / densidadePopulacional2);

    printf("\nSuper Poder da Cidade 1: %.2f\n", superPoder1);
    printf("Super Poder da Cidade 2: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");

    // População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));

    // Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));

    // PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2));

    // Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2));

    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPercapita1 > pibPercapita2) ? 1 : 2, (pibPercapita1 > pibPercapita2));

    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}