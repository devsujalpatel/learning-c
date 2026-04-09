#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;
      /* 
       0 For Stone
       1 For Paper
       2 For Scissor
       */
      srand(time(0));
    
    printf("Choose 0 for Stone, 1 for Paper, 2 for Scissor: \n");
    scanf("%d", &player);
    computer  = rand() % 3;
  printf("Computer chose: %d\n", computer);
  if(player == 0 && computer == 1) {
    printf("Computer wins! Paper covers Stone.\n");
  } else if (player == 1 && computer == 2) {
    printf("Computer wins! Scissor cuts Paper.\n");
  } else if (player == 2 && computer == 0) {
    printf("Computer wins! Stone crushes Scissor.\n");
  } else if (player == 0 && computer == 2) {
    printf("Player wins! Stone crushes Scissor.\n");
  } else if (player == 1 && computer == 0) {
    printf("Player wins! Paper covers Stone.\n");
  } else if (player == 2 && computer == 1) {
    printf("Player wins! Scissor cuts Paper.\n");
  } else {
    printf("It's a tie!\n");

  }
    return 0;
}
