#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int player1, COM;
    
    char estado1[15] = "Espírito Santo";
    unsigned int populacao1 = 4.102;
    float area1 = 46.095;
    

    char estado2[9] = "Amazonas";
    unsigned int populacao2 = 3.941;
    float area2 = 1.576;
    
    srand(time(0));


  printf("|-__-_Primeira Comparação de Cartas_-__-|\n"); 
  printf("Entre com o atributo da População da Primeira Carta: \n");
  scanf("%f", &populacao1);
  printf("Entre com o atributo da População da Segunda Carta: \n");
  scanf("%f", &populacao2);

  if (populacao1 > populacao2){
      printf("A Primeira Carta vence com a maior População!\n"); 
  }
  else{
      printf("A Segunda Carta vence com a maior População!\n");
  }

  printf("|-__-_Segunda Comparação de Cartas_-__-|\n"); 
  printf("Entre com o atributo da Área da Primeira Carta: \n");
  scanf("%f", &area1);
  printf("Entre com o atributo da Área da Segunda Carta: \n");
  scanf("%f", &area2);

  if (area1 > area2){
    printf("A Primeira Carta vence com a maior Área!\n"); 
  }
  else{
    printf("A Segunda Carta vence com a maior Área!\n");
  }


  printf("|-__-_Jogo do Super Trunfo_-__-|\n");
  printf("Escolha entre os atributos dos Estados:\n");
  printf("1. Espírito Santo - População\n");
  printf("2. Amazonas - População\n");
  printf("3. Espírito Santo - Área\n");
  printf("4. Amazonas - Área\n");
  printf("5. Sair\n");
  printf("Escolha: ");
  scanf("%d", &player1);

  COM = rand() % 4 + 1;

  switch (player1)
  {
  case 1:
      printf("Player 1: População Espírito Santo\n");
      break;
  case 2:
      printf("Player 1: População Amazonas\n");
      break;
  case 3:
      printf("Player 1: Área Espírito Santo\n");
      break;
  case 4:
      printf("Player 1: Área Amazonas\n");
      break;
  default:
       printf("Opcão Inválida");
      break;
  }

  switch (COM)
  {
  case 1:
      printf("COM: População Espírito Santo\n");
      break;
  case 2:
      printf("COM: População Amazonas\n");
      break;
  case 3:
      printf("COM: Área Espírito Santo\n");
      break;
  case 4:
      printf("COM: Área Amazonas\n");
      break;
  }

  if (COM == player1)
  {
    printf("Empate!! Tente novamente ;D\n");
  } 
  else if ((player1 == 1) && (COM == 2)  ||  (player1 == 2) && (COM == 1)  ||  
           (player1 == 3) && (COM == 4)  ||  (player1 == 4) && (COM == 3))  
  {
      printf("O Player Ganhou!!! :D\n");
  }
  else
  {
      printf("O COM Ganhou! Tente Novamente! :(\n");
  }


return 0;

}