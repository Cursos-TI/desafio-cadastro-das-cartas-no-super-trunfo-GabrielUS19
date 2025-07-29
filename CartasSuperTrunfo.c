#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char inicial1, inicial2, code1[4], code2[4], cidade1[20], cidade2[20];
    int quantidadePT1, quantidadePT2;
    float area1, area2, pib1, pib2, PIBpc1, PIBpc2, densidade1, densidade2, super1, super2;
    unsigned long int populacao1, populacao2;
    
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
    scanf("%ld", &populacao1);
    
    printf("Digite a área territorial da cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePT1);
    
    densidade1 = populacao1 / area1;
    PIBpc1 = pib1 / populacao1;

    super1 = populacao1 + area1 + pib1 + quantidadePT1 + PIBpc1 + (1/densidade1);
    
    // Carta 2
    
    printf("\nCarta 2\n");
    printf("Digite a inicial do estado: ");
    scanf(" %c", &inicial2);
    
    printf("Digite o código da carta: ");
    scanf("%s", code2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    
    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%ld", &populacao2);
    
    printf("Digite a área territorial da cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &quantidadePT2);
    
    densidade2 = populacao2 / area2;
    PIBpc2 = pib2 / populacao2;

    super2 = populacao2 + area2 + pib2 + quantidadePT2 + PIBpc2 + (1/densidade2);
    
    // Exibição dos Dados das Cartas:
    
    printf(
    "\nCarta 1:\n"
    "Estado: %c\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "Populacao: %ld\n"
    "Area: %.2f km²\n"
    "PIB: %.2f bilhoes de reais\n"
    "Numero de Pontos Turisticos: %d\n"
    "Densidade Demográfica: %.2f\n"
    "PIB per Capita: %.2f\n"
    "Super Poder: %.2f\n",
    inicial1, code1, cidade1, populacao1, area1, pib1, quantidadePT1, densidade1, PIBpc1, super1
    );
    
    printf(
    "\nCarta 2:\n"
    "Estado: %c\n"
    "Codigo: %s\n"
    "Nome da cidade: %s\n"
    "Populacao: %ld\n"
    "Area: %.2f km²\n"
    "PIB: %.2f bilhoes de reais\n"
    "Numero de Pontos Turisticos: %d\n"
    "Densidade Demográfica: %.2f\n"
    "PIB per Capita: %.2f\n"
    "Super Poder: %.2f\n",
    inicial2, code2, cidade2, populacao2, area2, pib2, quantidadePT2, densidade2, PIBpc2, super2
    );

    printf(
        "\nComparacao de Cartas:\n"
        "Populacao: Carta 1 venceu (%d)\n"
        "Area: Carta 1 venceu (%d)\n"
        "PIB: Carta 1 venceu (%d)\n"
        "Pontos Turisticos: Carta 1 venceu (%d)\n"
        "Densidade Populacional: Carta 1 venceu (%d)\n"
        "PIB per capita: Carta 1 venceu (%d)\n"
        "Super Poder: Carta 1 venceu (%d)\n",
        populacao1 > populacao2, area1 > area2, pib1 > pib2,
        quantidadePT1 > quantidadePT2, densidade1 < densidade2, PIBpc1 > PIBpc2, super1 > super2
    );

    return 0;
}
