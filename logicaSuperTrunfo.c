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
    int atributo1, atributo2;

    
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
    
       
// Menu do primeiro atributo
printf("********** HORA DA BATALHA **********\n\n");
printf("Escolha o primeiro atributo:\n\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n\n");
printf("Opção: ");
scanf("%d", &atributo1);

printf("\n");

// Menu do segundo atributo (dinâmico)
printf("Escolha o segundo atributo (diferente do primeiro):\n\n");
for (int i = 1; i <= 5; i++) {
    if (i != atributo1) { // não mostrar o que já foi escolhido
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
}
printf("\nOpção: ");
scanf("%d", &atributo2);

// Variáveis para armazenar os valores escolhidos
float valor1_carta1 = 0, valor1_carta2 = 0;
float valor2_carta1 = 0, valor2_carta2 = 0;

// Função auxiliar: atribui os valores de acordo com o atributo escolhido
switch (atributo1) {
    case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
    case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
    case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
    case 4: valor1_carta1 = pontosturisticos1; valor1_carta2 = pontosturisticos2; break;
    case 5: valor1_carta1 = mediaDensidade1; valor1_carta2 = mediaDensidade2; break;
}

switch (atributo2) {
    case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
    case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
    case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
    case 4: valor2_carta1 = pontosturisticos1; valor2_carta2 = pontosturisticos2; break;
    case 5: valor2_carta1 = mediaDensidade1; valor2_carta2 = mediaDensidade2; break;
}

// Comparação individual
printf("\n===== RESULTADO DA BATALHA =====\n\n");
printf("Carta 1 (%s) vs Carta 2 (%s)\n\n", cidade1, cidade2);

// Primeiro atributo
printf("Atributo 1: ");
switch (atributo1) {
    case 1: printf("População\n"); break;
    case 2: printf("Área\n"); break;
    case 3: printf("PIB\n"); break;
    case 4: printf("Pontos Turísticos\n"); break;
    case 5: printf("Densidade Demográfica\n"); break;
}
printf("Carta 1: %.2f\n", valor1_carta1);
printf("Carta 2: %.2f\n\n", valor1_carta2);

// Segundo atributo
printf("Atributo 2: ");
switch (atributo2) {
    case 1: printf("População\n"); break;
    case 2: printf("Área\n"); break;
    case 3: printf("PIB\n"); break;
    case 4: printf("Pontos Turísticos\n"); break;
    case 5: printf("Densidade Demográfica\n"); break;
}
printf("Carta 1: %.2f\n", valor2_carta1);
printf("Carta 2: %.2f\n\n", valor2_carta2);

// Soma dos atributos
float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;

printf("Soma Carta 1: %.2f\n", soma1);
printf("Soma Carta 2: %.2f\n\n", soma2);

// Determinar vencedor final (lembrando da exceção da densidade)
int venceu1 = 0, venceu2 = 0;

// Primeiro atributo
if (atributo1 == 5) { // densidade: menor vence
    if (valor1_carta1 < valor1_carta2) venceu1++; else if (valor1_carta1 > valor1_carta2) venceu2++;
} else { // normal: maior vence
    if (valor1_carta1 > valor1_carta2) venceu1++; else if (valor1_carta1 < valor1_carta2) venceu2++;
}

// Segundo atributo
if (atributo2 == 5) { // densidade: menor vence
    if (valor2_carta1 < valor2_carta2) venceu1++; else if (valor2_carta1 > valor2_carta2) venceu2++;
} else {
    if (valor2_carta1 > valor2_carta2) venceu1++; else if (valor2_carta1 < valor2_carta2) venceu2++;
}

// Resultado final
if (soma1 > soma2) {
    printf(">>> CARTA 1 VENCEU A RODADA! <<<\n");
} else if (soma2 > soma1) {
    printf(">>> CARTA 2 VENCEU A RODADA! <<<\n");
} else {
    printf(">>> EMPATE! <<<\n");
}
    }        
                
    return 0;

}