#include <stdio.h>

int main() {
    // Carta 1 - Super Trunfo (Variaveis)
    char estado1;
    char codigo1 [4];
    char nomedacidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Carta 2 - Super Trunfo
    char estado2;
    char codigo2 [4];
    char nomedacidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Inserir os dados da carta - Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado:");
    scanf(" %c", &estado1);

    printf("Código da carta:");
    scanf("%s", codigo1);
    
    printf("Nome da cidade:");
    scanf("%s", nomedacidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosturisticos1);


    // Inserir os dados da carta - Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado:");
    scanf(" %c", &estado2);

    printf("Código da carta:");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", nomedacidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosturisticos2);


    // Visualização Final das cartas 1 e 2 
    printf("\n-Cartas Cadastradas-\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
