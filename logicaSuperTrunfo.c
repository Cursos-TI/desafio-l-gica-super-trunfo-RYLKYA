#include <stdio.h>
#include <string.h>

int main() {
    char estado1[20];
    char codigo1[20];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    char estado2[20];
    char codigo2[20];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    int opcao;
    
    printf("Insira os dados da carta 1\n"); // Inserir os dados da 1⁰ carta
    printf("Nome do Estado (De A até H): \n"); // Inserir o Estado da 1⁰ carta
    scanf("%s", &estado1);
    
    printf("\n");
    
    printf("Código da carta (O Estado + um número de 01 até 04): \n"); // Inserir o Código da 1⁰ carta
    scanf("%s", &codigo1);
    
    printf("\n");
    
    printf("Nome da Cidade: \n");
    while (getchar() != '\n');  // limpa o buffer até a próxima quebra de linha
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // remove o \n no final
    
    printf("\n");
    
    printf("População da Cidade: \n"); //Inserir a População da 1⁰ carta
    scanf("%lu", &populacao1);
    
    printf("\n");
    
    printf("Área em KM²: \n"); //Inserir a Área em KM²
    scanf("%f", &area1);
    
    printf("\n");
    
    printf("PIB da carta: \n"); //Inserir o PIB
    scanf("%f", &pib1);
    
    printf("\n");
    
    printf("Quantidade de Pontos Turísticos: \n"); //Inserir a Quantidade de Pontos Turísticos
    scanf("%d", &pontosturisticos1);
    
    float mediaDensidade1 = (populacao1 + area1) / 2;
    float mediaPibPerCapita1 = (pib1 + populacao1) / 2;
    
    printf("\n");
    printf("\n");
    
    printf("Agora, insira os dados da carta 2\n"); // Inserir os dados da 2⁰ carta
    printf("Nome do Estado (De A até H): \n"); // Inserir o Estado da 2⁰ carta
    scanf("%s", &estado2);
    
    printf("\n");
    
    printf("Código da carta (O Estado + um número de 01 até 04): \n"); // Inserir o Código da 1⁰ carta
    scanf("%s", &codigo2);
    
    printf("\n");
    
    printf("Nome da Cidade: \n");
    while (getchar() != '\n'); // limpa o buffer antes de ler
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // remove o \n no final
    
    printf("\n");
    
    printf("População da Cidade: \n"); //Inserir a População da 2⁰ carta
    scanf("%lu", &populacao2);
    
    printf("\n");
    
    printf("Área em KM²: \n"); //Inserir a Área em KM²
    scanf("%f", &area2);
    
    printf("\n");
    
    printf("PIB da carta: \n"); //Inserir o PIB
    scanf("%f", &pib2);
    
    printf("\n");
    
    printf("Quantidade de Pontos Turísticos: \n"); //Inserir a Quantidade de Pontos Turísticos
    scanf("%d", &pontosturisticos2);
    
    float mediaDensidade2 = (populacao2 + area2) / 2;
    float mediaPibPerCapita2 = (pib2 + populacao2) / 2;
    
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("Dados da Carta 1: \n"); //Códigos para retornar os dados da Carta 1
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em KM²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", mediaDensidade1);
    printf("PIB Per Capita: %.2f reais\n", mediaPibPerCapita1);
    
    
    printf("\n");
    printf("\n");
    
    printf("Dados da Carta 2: \n"); //Códigos para retornar os dados da Carta 2
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em KM²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);    
    printf("Densidade Populacional: %.2f hab/km²\n", mediaDensidade2);
    printf("PIB Per Capita: %.2f reais\n", mediaPibPerCapita2);
    
    float superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + mediaPibPerCapita1 - mediaDensidade1;
    float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + mediaPibPerCapita2 - mediaDensidade2;
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("********** HORA DA BATALHA **********\n\n");

printf("Escolha o atributo para comparação:\n\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n\n");
printf("Opção: ");
scanf("%d", &opcao);

printf("\n");

switch (opcao) {
    case 1: // População
        printf("POPULAÇÃO\n\n");
        printf("Carta 1: %lu\n", populacao1);
        printf("Carta 2: %lu\n", populacao2);
        printf("\n");
        
        if (populacao1 > populacao2) {
            printf("CARTA 1 GANHOU!\n");
        } else if (populacao1 < populacao2) {
            printf("CARTA 2 GANHOU!\n");
        } else {
            printf("EMPATE!\n");
        }
        break;

    case 2: // Área
        printf("ÁREA\n\n");
        printf("Carta 1: %.2f\n", area1);
        printf("Carta 2: %.2f\n", area2);
        printf("\n");
        
        if (area1 > area2) {
            printf("CARTA 1 GANHOU!\n");
        } else if (area1 < area2) {
            printf("CARTA 2 GANHOU!\n");
        } else {
            printf("EMPATE!\n");
        }
        break;

    case 3: // PIB
        printf("PIB\n\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);
        printf("\n");
        
        if (pib1 > pib2) {
            printf("CARTA 1 GANHOU!\n");
        } else if (pib1 < pib2) {
            printf("CARTA 2 GANHOU!\n");
        } else {
            printf("EMPATE!\n");
        }
        break;

    case 4: // Pontos turísticos
        printf("PONTOS TURÍSTICOS\n\n");
        printf("Carta 1: %d\n", pontosturisticos1);
        printf("Carta 2: %d\n", pontosturisticos2);
        printf("\n");
        
        if (pontosturisticos1 > pontosturisticos2) {
            printf("CARTA 1 GANHOU!\n");
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("CARTA 2 GANHOU!\n");
        } else {
            printf("EMPATE!\n");
        }
        break;

    case 5: // Densidade (como o curso pediu)
        printf("DENSIDADE DEMOGRÁFICA \n\n");
        printf("Carta 1: %.2f\n", mediaDensidade1);
        printf("Carta 2: %.2f\n", mediaDensidade2);
        printf("\n");
        
        if (mediaDensidade1 > mediaDensidade2) {
            printf("CARTA 1 GANHOU!\n");
        } else if (mediaDensidade1 < mediaDensidade2) {
            printf("CARTA 2 GANHOU!\n");
        } else {
            printf("EMPATE!\n");
        }
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");

    }        
                
    return 0;

}