#include <stdio.h>

int main() {
    //informações da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    //informações da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    //entrada de dados carta 1
    printf("Digite os dados da primeira carta:\n");

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

    //entrada de dados carta 2
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

    //saída de informações
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

    // Calculo de densidade populacional
        float densidadePopulacional1 = (float)populacao1 / area1;
        printf("\nDensidade Populacional da Cidade 1: %.2f hab/km²\n", densidadePopulacional1);

        float densidadePopulacional2 = (float)populacao2 / area2;
        printf("Densidade Populacional da Cidade 2: %.2f hab/km²\n", densidadePopulacional2);


        float pibPercapita1 = pib1 / populacao1;
        printf("\nPib per capita da Cidade 1: %.2f \n", pibPercapita1);
    
        float pibPercapita2 = pib2 / populacao2;
        printf("Pib per capita da Cidade 2: %.2f \n", pibPercapita2);
    
    return 0;
}