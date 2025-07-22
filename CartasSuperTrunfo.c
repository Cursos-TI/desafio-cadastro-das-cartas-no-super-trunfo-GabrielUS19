#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char inicial1, inicial2, code1[4], code2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, quantidadePT1, quantidadePT2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    
    // Carta 1
    
    printf("Carta 1\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &inicial1);
    
    printf("Digite o código da carta: ");
    scanf("%s", code1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área territorial da cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePT1);
    
    // Carta 2
    
    printf("\nCarta 2\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &inicial2);
    
    printf("Digite o código da carta: ");
    scanf("%s", code2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área territorial da cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePT2);
    
    // Exibição dos Dados das Cartas:
    
    printf(
    "\nCarta 1:\n"
    "Estado: %c\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "Populacao: %d\n"
    "Area: %.2f km²\n"
    "PIB: %.2f bilhoes de reais\n"
    "Numero de Pontos Turisticos: %d\n",
    inicial1, code1, cidade1, populacao1, area1, pib1, quantidadePT1
    );
    
    printf(
    "\nCarta 2:\n"
    "Estado: %c\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "Populacao: %d\n"
    "Area: %.2f km²\n"
    "PIB: %.2f bilhoes de reais\n"
    "Numero de Pontos Turisticos: %d\n",
    inicial2, code2, cidade2, populacao2, area2, pib2, quantidadePT2
    );

    return 0;
}
