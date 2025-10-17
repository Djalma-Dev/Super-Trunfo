#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1; 
    char nomecidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2;
    char nomecidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cabeçalho do programa
    printf("SUPER TRUNFO - CADASTRO DE CARTAS\n");
    printf("Cadastre os dados das cartas do jogo.\n");


    // LEITURA DOS DADOS DA CARTA 1
    printf("--- CARTA 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1); 
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // LEITURA DOS DADOS DA CARTA 2
    printf("--- CARTA 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): \n ");
    scanf("%3s", codigo2);
    
    printf("Nome da Cidade: \n ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // EXIBIÇÃO DOS DADOS CADASTRADOS

    printf("=== CARTAS CADASTRADAS ===\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("\n");
    printf("Cadastro concluído com sucesso!\n");

     // Exibição das comparações: 
    
        printf("\n Comparação: (Atributo: Área) \n");

    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

    if(area1 > area2) {
        printf("\nResultado: Carta 1 (km2) venceu!\n", cidade1);
    } else {
        printf("\nResultado: Carta 2 (km2) venceu!\n", cidade2);
    }

    return 0;
