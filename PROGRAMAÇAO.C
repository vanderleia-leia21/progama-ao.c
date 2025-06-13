 #include <stdio.h>

int main() {
    char estado[3];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    // Entrada dos dados
    printf("Informe o estado: ");
    scanf("%s", estado);

    printf("Informe o código da carta: ");
    scanf("%s", codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade); // lê o nome completo com espaços

    printf("Informe a população: ");
    scanf("%d", &populacao);

    printf("Informe a área em km²: ");
    scanf("%f", &area);

    printf("Informe o PIB (em milhões de reais): ");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos);

    // Cálculos
    float densidade = populacao / area;
    float pibPercapita = (pib * 1000000) / populacao;

    // Exibição dos dados
    printf("\n--- CARTA SUPER TRUNFO ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: R$ %.2f\n", pibPercapita);

    return 0;
}