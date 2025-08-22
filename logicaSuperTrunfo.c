#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];
    unsigned long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    int opcao1, opcao2;
    int continuar = 1;

    printf("=== CADASTRO DAS CARTAS ===\n\n");

    // Carta 1
    printf("Digite o nome do país da Carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;

    printf("\n");

    // Carta 2
    printf("Digite o nome do país da Carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;

    printf("\n=== Cartas cadastradas com sucesso! ===\n\n");

    // Loop de comparação
    while (continuar == 1) {
        printf("=== HORA DA BATALHA ===\n\n");

        printf("Escolha o PRIMEIRO atributo:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &opcao1);

        // Segundo menu (dinâmico)
        printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i == opcao1) continue; // não mostra o já escolhido
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
        printf("Opção: ");
        scanf("%d", &opcao2);

        if (opcao1 == opcao2) {
            printf("\nVocê não pode escolher o mesmo atributo duas vezes!\n\n");
            continue; // volta para escolher de novo
        }

        float valor1A = 0, valor2A =