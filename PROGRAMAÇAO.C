 #include <stdio.h>

int main() {
     //entrada de dados
   printf("-----Desafio Super Tunfo- Países-----\n");
   printf("\nOlá, seja bem vindo!\n");

    // Dados da carta 1 (São Luís)
    char estado1[];
    char codigo1[];
    char cidade1[];
    int populacao1;
    float area1;
    float pib1; // Em milhões
    int pontos1;

    // Dados da carta 2 (Rio Branco)
    char estado2[];
    char codigo2[];
    char cidade2[];
    int populacao2;
    float area2;
    float pib2; // Em trilhões convertidos para milhões
    int pontos2;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float pibPercapita1 = (pib1 * 1000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPercapita2 = (pib2 * 1000000) / populacao2;

    // entrada de dados
    printf("\nCARTA 1\n");
    printf("Digite o Estado: \nDigite o Código: \nDigite a Cidade: \nDigite a Populacão: \n Digite a Área: \n Digite o PIB: \n digite os Pontos turísticos: \n",estado1,codigo1, cidade1, populacao1, area1, pib1, pontos1);
    printf("Digite a Densidade populacional: \n", densidade1);
    printf("Digite o PIB per capita:  \n\n", pibPercapita1);
    scanf("%d\n", &estado1 "%d\n", &codigo1 "%d\n", &cidade1 "%d\n", &populacao1 "%e\n"&area1 "%2f\n", &PIB1 "%d\n", &turistico1);
    scanf("%2f\n", &densidade1);
    scanf("%2f\n", &pibPercapita1);


    printf("CARTA 2\n");
    printf("Digite o Estado: \n Digite o Código: \nDigite a Cidade: \nDigite a Populacão:\nDigite a Área: \nDigite o PIB:\nDigite o Pontos turísticos: \n", estado2,codigo2,cidade2, populacao2, area2, pib2, pontos2);
    printf("Digite a Densidade populacional: \n", densidade2);
    printf("Digite o PIB per capita:\n\n", pibPercapita2);
    scanf("%d\n", &estado2 "%d\n", &codigo2 "%d\n", &cidade2 "%d\n", &populacao2 "%e\n"&area2 "%2f\n", &PIB2 "%d\n", &turistico2);
    scanf("%2f\n", &densidade2);
    scanf("%2f\n", &pibPercapita2);

    // Exibição dos resultados
    printf("--Comparação dos Atributos--\n\n");

    printf("Carta 1 -%d:\n");
    printf("Área: %.2f km²\n", area1);

    printf("Carta 2 - %d:\n");
    printf("Área: %.2f km²\n\n", area2);

   // Comparações
    printf("--Resultado--\n");

    if (area1 > area2) {
        printf("\nCarta 1 -%d, venceu!!!\n");
    } else if (area2> area1) {
        printf("\nCarta 2 - %d, venceu!!!\n");
    } else {
        printf("\nEmpate.\n");
    }

    return 0;
}