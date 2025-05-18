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
 scanf("%c", &estado1);
 printf("Código da carta: A01\n");
 scanf("%c", &codigo1);
 printf("Nome da cidade:São Luís\n");
 scanf("%c", &cidade1);
 printf("População:316000\n");
 scanf("%s", &populacao1);
 printf("Área:6581900\n");
 scanf("%e", &area1);
 printf("PIB1\n");
 scanf("%e", &PIB1);
 printf("Pontos turísticos:67 \n");
 scanf("%s", &pontos turisticos1);

//Cadastro da segunda carta

 printf("Carta2\n");
 printf("Estado:B\n");
 scanf("%c", &estado2);
 printf("Código da carta:B02\n" );
 scanf("%c", &codigo2);
 printf("Nome da cidade:Rio Branco\n");
 scanf("%c", &cidade2);
 printf("População: 5168009" );
 scanf("%s", &população2);
 printf("Área: 4329002" );
 scanf("%e", &area);
 printf("PIB2\n");
 scanf("%e", &PIB2);
 printf("Pontos turísticos:43\n" );
 scanf("%s", &pontos turisticos);
 
 return 0; 
}
