#include <stdio.h>
printf("Desafio Super Trunfo- Países\n");

// declaração das variáveis para as duas cartas
int main(){ 
char estado1, estado2 [20];
char codigo1, codigo2[20];
char cidade1, cidade2[20];
int população1, população2;
float área1, area2;
float PIB1, PIB2;
int pontos turisticos1, pontos turisticos2;

 //entrada de dados
 printf("Seja bem vindo!");
 printf("Escolha sua carta,\n carta1 ou a carta2\n");
 scanf("%d, &carta1");
 scanf("%d, &carta2");

 //cadastro da primeira carta 

 printf("Carta1\n");
 printf("Estado:A\n");
 scanf("%s", &estado1);
 printf("Código da carta: A01\n");
 scanf("%s", &codigo1);
 printf("Nome da cidade:São Luís\n");
 scanf("%s", &cidade1);
 printf("População:316000\n");
 scanf("%d", &populacao1);
 printf("Área:6581900\n");
 scanf("%e", &area1);
 printf("PIB1\n");
 scanf("%.2f", &PIB1);
 printf("Pontos turísticos:67 \n");
 scanf("%d", &pontos turisticos1);

//Cadastro da segunda carta

 printf("Carta2\n");
 printf("Estado:B\n");
 scanf("%s", &estado2);
 printf("Código da carta:B02\n" );
 scanf("%s", &codigo2);
 printf("Nome da cidade:Rio Branco\n");
 scanf("%s", &cidade2);
 printf("População: 5168009" );
 scanf("%d", &população2);
 printf("Área: 4329002" );
 scanf("%e", &area2);
 printf("PIB2\n");
 scanf("%.2f", &PIB2);
 printf("Pontos turísticos:43\n" );
 scanf("%d", &pontos turisticos2);

 //Exibição dos dados cadrastrados

 
 // final do jogo
 printf("Obrigado por ter jogado!\n ");
 
 return 0; 
}
