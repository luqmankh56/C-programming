//Author:Luqman Khan
#include <stdio.h>
int main(){
	
    int PMLN = 0, PTI = 0, PPP = 0; 
    int vote;
    char continue_Voting;

    do {
        
        printf("Election Commision of Pakistan\n\n");
        printf("1. PMLN\n");
        printf("2. PTI\n");
        printf("3. PPP\n");
        printf("Enter your vote : ");
        scanf("%d", &vote);
 		
		 if (vote == 1) {
            PMLN++;
            printf("You voted for PMLN\n");
        } else if (vote == 2) {
            PTI++;
            printf("You voted for PTI.\n");
        } else if (vote == 3) {
            PPP++;
            printf("You voted for PPP.\n");
        } else {
            printf("Invalid vote! Select a party from the above.\n");
        }
        printf("Do you want to cast another vote? (y/n): ");
        scanf(" %c", &continue_Voting);
    }

    while (continue_Voting == 'y' || continue_Voting == 'Y');

    printf("\nVoting Results:\n");
    printf("PMLN: %d votes\n", PMLN);
    printf("PTI: %d votes\n", PTI);
    printf("PPP: %d votes\n", PPP);

    printf("Thank you for participating in the voting process!\n");

    return 0;
}
