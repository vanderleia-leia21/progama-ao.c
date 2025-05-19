#include <stdio.h>

// declaração das variáveis para as duas cartas
int main(){ 
char estado1, estado2 [50];
char codigo1, codigo2[50];
char cidade1, cidade2[50];
int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int turisticos1, turisticos2;

 //entrada de dados
 printf("Desafio Super Tunfo- Países\n");
 printf("Olá, seja bem vindo!\n");
 printf("Escolha sua carta\n");
 printf("carta1 ou a carta2\n");
 scanf("&carta1\n");
 scanf("&carta2\n");

 //cadastro da primeira carta 

 printf("Carta1\n");
 printf("Estado:Maranhão\n");
 scanf("%s", &estado1);
 printf("Código da carta: A01\n");
 scanf("%s", &codigo1);
 printf("Nome da cidade:São Luís\n");
 scanf("%s", &cidade1);
 printf("População:34316000\n");
 scanf("%d", &populacao1);
 printf("Área:658190.05\n");
 scanf("%e", &area1);
 printf("PIB1:2009753.89\n");
 scanf("%2f", &PIB1); //para a primeira carta
 printf("Pontos turísticos:67 \n");
 scanf("%d", &turisticos1);

//Cadastro da segunda carta
 printf("Carta2\n");
 printf("Estado:Acre\n");
 scanf("%s", &estado2);
 printf("Código da carta:B02\n" );
 scanf("%s", &codigo2);
 printf("Nome da cidade:Rio Branco\n");
 scanf("%s", &cidade2);
 printf("População: 5168009\n" );
 scanf("%d", populacao2);
 printf("Área: 4329003.62\n" );
 scanf("%e", &area2);
 printf("PIB2:8400432.2\n");
 scanf("%2f", &PIB2); //para a segunda carta
 printf("Pontos turísticos:43\n" );
 scanf("%d", &turisticos2);

 //Se escolher a primeira carta exibir só essa carta
scanf("Se escolher a primeira carta exibir= Os Dados da Primeira Carta");
scanf("Carta1\n");
scanf("estado: %s\n", estado1);
scanf("codiga da carta: %s\n",codigo1);
scanf("cidade: %s\n", cidade1);
scanf("populacão: %d\n", populacao1);
scanf("area: %e\n", area1);
scanf("PIB: %2f\n", PIB1);
scanf("pontos turisticos:%d\n",turisticos1);

//Se escolher a segunda carta exibir so essa carta
 scanf("Se escolher a sedunda carta exibir= Os Dados da Segunda Carta");
 scanf("carta2\n");
 scanf("estado2:%s\n", estado2);
 scanf("codigo da carta;%s\n", codigo2);
 scanf("cidade:%s\n", cidade2);
 scanf("população:%d\n", populacao2);
 scanf("area:%e\n", area2);
 scanf("PIB: %2f\n", PIB2);
 scanf("pontos turisticos:%d\n",turisticos2);


 return 0; 
}
