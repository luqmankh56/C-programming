#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WINNING_SCORE 10

int rollDie() {
    return (rand() % 6) + 1; 
}

int main() {
    int score = 0;
    char choice;
    int won = 0; 

    srand(time(0));

	printf("LUDO GAME\n\n");
    printf("Reach %d points to win.\n", WINNING_SCORE);

    do {
        int roll = rollDie();
        
        printf("You rolled: %d\n", roll);
        score += roll;
		 
        printf("Your current score is: %d\n", score);
        
        if (score >= WINNING_SCORE) {
            won = 1; 
            printf("You reached %d points and won the game!\n", WINNING_SCORE);
        } else {
            printf("Do you want to roll again? (y/n): ");
            scanf(" %c", &choice);
        }

    } while ((choice == 'y' || choice == 'Y') && !won);
    printf("Your final score is %d.\n", score);

    return 0;
}
