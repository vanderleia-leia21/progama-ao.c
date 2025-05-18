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
 printf("Código da carta: A01\n");
 printf("Nome da cidade:Maranhão\n");
 printf("População:316000\n");
 printf("PIB1, PIB2 \n");
 printf("Área:6581900\n");
 printf("Pontos turísticos:67 \n");

//Cadastro da segunda carta

 printf("Carta2\n");
 printf("Estado:B\n", estado2);
 printf("Código da carta:B02\n", codigo2);
 printf("Nome da cidade: Belo Horizonte\n", cidade2);
 printf("População: 5168009", populacao2);
 printf("Área: 4329002", area2);
 printf("Pontos turísticos:43\n", pontos turisticos2 );
 
 return 0; 
}
