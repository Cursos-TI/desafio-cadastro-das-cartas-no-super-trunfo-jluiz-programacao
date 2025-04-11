#include <stdio.h>


//DECLARAÇÃO DAS VARIÁVEIS
int main() {
       int escolhajogador;
       char Italia, Espanha;
       int Italiapopulacao, Espanhapopulacao;
       float Italiaarea, Espanhaarea;
       float ItaliaPIB, EspanhaPIB;
       int Italiapontos_turisticos, Espanhapontos_turisticos;
       float Italiadensidade_demografica, Espanhadensidade_demografica;

//ATRIBUINDO O VALOR DAS VARIÁVEIS
     Italiapopulacao = 59000000;
     Italiaarea = 302073;
     ItaliaPIB = 2301000;
     Italiapontos_turisticos = 72;
     Italiadensidade_demografica = 197;

     Espanhapopulacao = 48350000;
     Espanhaarea = 506030;
     EspanhaPIB = 1621000;
     Espanhapontos_turisticos = 63;
     Espanhadensidade_demografica = 96;


    
//CRIAÇÃO DO MENU INTERATIVO

 printf("***DUELO DE CARTAS: SUPER TRUNFO***\n");
 printf("ITÁLIA X ESPANHA\n");
 printf("1. POPULAÇÕES\n");
 printf("2. EXTENSÃO TERRITORIAL\n");
 printf("3. PRODUTO INTERNO BRUTO - PIB\n");
 printf("4. PONTOS TURÍSTICOS\n");
 printf("5. DENSIDADE DEMOGRÁFICA\n");
 printf("Escolha: \n");
 scanf("%d", &escolhajogador);


//IMPLEMENTAÇÃO DO SWITCH COM USO DA ESTRUTURA DE DECISÃO ENCADEADA

 switch (escolhajogador) {
   case 1:
   if (Italiapopulacao > Espanhapopulacao) {
     printf("ITÁLIA X ESPANHA\n");
     printf("Atributo de comparação: POPULAÇÃO\n");
     printf("Itália: %d pessoas x Espanha: %d pessoas\n", Italiapopulacao, Espanhapopulacao);
     printf("### ITÁLIA GANHOU! ###\n");
  } else if(Italiapopulacao < Espanhapopulacao) {
     printf("ITÁLIA X ESPANHA\n");
     printf("Atributo de comparação: POPULAÇÃO\n");
     printf("Itália: %d pessoas x Espanha: %d pessoas\n", Italiapopulacao, Espanhapopulacao);
     printf("### ESPANHA GANHOU ###");
  }  else {
     printf("ITÁLIA X ESPANHA\n");
     printf("Atributo de comparação: POPULAÇÃO\n");
     printf("Itália: %d pessoas x Espanha: %d pessoas\n", Italiapopulacao, Espanhapopulacao);
     printf("### EMPATE ###");
  }
   break;

   case 2:
   if (Italiaarea > Espanhaarea) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: EXTENSÃO TERRITORIAL\n");
      printf("Itália: %.2f Km2  x Espanha: %.2f Km2 \n", Italiaarea, Espanhaarea);
      printf("### ITÁLIA GANHOU! ###\n");
   } else if(Italiaarea < Espanhaarea) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: EXTENSÃO TERRITORIAL\n");
      printf("Itália: %.2f Km2 x Espanha: %.2f Km2\n", Italiaarea, Espanhaarea);
      printf("### ESPANHA GANHOU ###");
   }  else {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: EXTENSÃO TERRITORIAL\n");
      printf("Itália: %.2f Km2 x Espanha: %.2f Km2\n", Italiaarea, Espanhaarea);
      printf("### EMPATE ###");
   }
     break;
     
   case 3:
   if (ItaliaPIB > EspanhaPIB) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: PRODUTO INTERNO BRUTO - PIB\n");
      printf("Itália: %.2f BILHÕES  x Espanha: %.2f BILHÕES \n", ItaliaPIB, EspanhaPIB);
      printf("### ITÁLIA GANHOU! ###\n");
   }  else if(ItaliaPIB < EspanhaPIB) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: PRODUTO INTERNO BRUTO - PIB\n");
      printf("Itália: %.2f BILHÕES  x Espanha: %.2f BILHÕES \n", ItaliaPIB, EspanhaPIB);
      printf("### ESPANHA GANHOU! ###\n");
   }  else {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: PRODUTO INTERNO BRUTO - PIB\n");
      printf("Itália: %.2f BILHÕES  x Espanha: %.2f BILHÕES \n", ItaliaPIB, EspanhaPIB);
      printf("### EMPATE ###\n");
   }
       break;
   case 4:
   if (Italiapontos_turisticos > Espanhapontos_turisticos) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: PONTOS TURÍSTICOS\n");
      printf("Itália: %d  x Espanha: %d \n", Italiapontos_turisticos, Espanhapontos_turisticos);
      printf("### ITÁLIA GANHOU! ###\n");
   }  else if(Italiapontos_turisticos < Espanhapontos_turisticos) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: PONTOS TURÍSTICOS\n");
      printf("Itália: %d  x Espanha: %d \n", Italiapontos_turisticos, Espanhapontos_turisticos);
      printf("### ESPANHA GANHOU! ###\n");
   }  else {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: PONTOS TURÍSTICOS\n");
      printf("Itália: %d  x Espanha: %d \n", Italiapontos_turisticos, Espanhapontos_turisticos);
      printf("### EMPATE! ###\n");   
   }
       break;
       //Implementado o uso do not "!"
   case 5:
   if (!Italiadensidade_demografica > Espanhadensidade_demografica) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: DENSIDADE DEMOGRÁFICA\n");
      printf("Itália: %.2f Hab/km2  x Espanha: %.2f Hab/km2 \n", Italiadensidade_demografica, Espanhadensidade_demografica);
      printf("### ITÁLIA GANHOU! ###\n");
   }  else if(!Italiadensidade_demografica < Espanhadensidade_demografica) {
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: DENSIDADE DEMOGRÁFICA\n");
      printf("Itália: %.2f Hab/km2  x Espanha: %.2f Hab/km2 \n", Italiadensidade_demografica, Espanhadensidade_demografica);
      printf("### ESPANHA GANHOU! ###\n"); 
   }  else { 
      printf("ITÁLIA X ESPANHA\n");
      printf("Atributo de comparação: DENSIDADE DEMOGRÁFICA\n");
      printf("Itália: %.2f Hab/km2  x Espanha: %.2f Hab/km2 \n", Italiadensidade_demografica, Espanhadensidade_demografica);
      printf("### EMPATE! ###\n");  
   }
          break;
 default:
   printf("Opção inválida!\n");
 }


return 0;

 }
