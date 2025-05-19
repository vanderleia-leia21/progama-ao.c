#include <stdio.h>
printf("Desafio Super Trunfo- Países\n");

// declaração das variáveis para as duas cartas
int main(){ 
char estado1, estado2 [20];
char codigo1, codigo2[20];
char cidade1, cidade2[20];
int populacao1, populacao2;
float área1, area2;
float PIB1, PIB2;
int pontos turisticos1, pontos turisticos2;

 //entrada de dados
 printf("Olá, Seja bem vindo!\n");
 printf("Escolha sua carta,\n");
 printf("carta1 ou a carta2\n");
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
 printf("População:34316000\n");
 scanf("%d", &populacao1);
 printf("Área:6581900\n");
 scanf("%e", &area1);
 printf("PIB1:2009753.89\n");
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
 printf("População: 5168009\n" );
 scanf("%d", &população2);
 printf("Área: 4329002\n" );
 scanf("%e", &area2);
 printf("PIB2:8400432.2\n");
 scanf("%.2f", &PIB2);
 printf("Pontos turísticos:43\n" );
 scanf("%d", &pontos turisticos2);

 //Exibição dos dados cadrastrados se escolher a primeira carta 
scanf("Se escolher a primeira carta exibir= Os Dados da Primeira Carta");
scanf("Carta1\n");
scanf("estado: %s\n", estado1);
scanf("codiga da carta: %s\n",codigo1);
scanf("cidade: %s\n", cidade1);
scanf("populacão: %d\n", populacão1);
scanf("area: %e\n", area1);
scanf("PIB: %.2f\n", PIB1);
scanf("pontos turisticos:%d\n", pontos turiscos1);

//Exibicão dos dados cadrastados se escolher a segunda carta
 scanf("Se escolher a sedunda carta exibir= Os Dados da Segunda Carta");
 scanf("carta2\n");
 scanf("estado2:%s", estado2);
 scanf("codigo da carta;%s", codigo2);
 scanf("cidade:%s", cidade2);
 scanf("população:%d", população2);
 scanf("area:%e", area2);
 scanf("PIB: %.2f", PIB2);
 scanf("pontos turisticos:%d", pontos turisticos2);


 // final do jogo
 printf("Obrigado por ter jogado!\n ");

 return 0; 
}
