/*Write a program that implements the game known as rock, paper, scissors. This time, the game will be played between a human user (player) and the computer in N rounds, where N is a constant predefined in the code (use #define for the constant definition). In each round, the human chooses an option between rock, paper, and scissors, and your program should display the result of the match on the screen: human wins, computer wins, or tie. At the end of N rounds, your program should display:

 - Number of human victories
 - Number of computer victories
 - Number of ties
Requirements:
 - To simulate the computer's choices, you should use random number generation (using the rand() function).
 - The computer chooses the option "rock" with a 50% probability; the other options are chosen with a 25% probability each.
 - Create a function that generates the computer's move following the logic mentioned above.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 //initialization of the constant that defines the number of rounds to be played

int jogadaDoComputador() {
    int random = (rand() % 100) + 1; //generates a random number between 1 and 100

    if (random < 50) { 
        return 0; //50% chance of choosing rock
    } else if (random < 75) {
        return 1; //25% chance of choosing paper
    } else {
        return 2; //25% chance of choosing scissors
    }
}

int main(){
    //variable declaration
    int escolhaJogador, escolhaPC; //variables to store the choices of the player and the computer
    int vitoriaJogador = 0, vitoriaPC = 0, empate = 0; //counters for player victories, computer victories, and total ties

    srand(time(NULL)); //initializes the random number generator with the current time (shown in today's class, starts at January 1, 1970, 00:00:00 (UTC)).

    //starts the game that goes until N rounds, according to the constant initialized earlier
    for (int i = 0; i < N; i++) {
        //input for the player's choice
        printf("Round %d - Choose your move (0 = Rock, 1 = Paper, 2 = Scissors): ", i + 1);
        scanf("%d", &escolhaJogador); //receives the player's choice

        //checks if the player's input is valid
        if (escolhaJogador < 0 || escolhaJogador > 2) {
            printf("Invalid input. Please choose 0, 1, or 2.\n"); //error message for invalid input
            i--; //repeats the current round because of invalid choice
            printf("\n\n"); 
            continue;
            //proceeds to the next iteration of the loop
        }

        //input for the computer's move
        escolhaPC = jogadaDoComputador(); //calls the function that generates the computer's move

        //automatically displays the computer's moves
        printf("Computer chose: %s\n", (escolhaPC == 0) ? "Rock" : (escolhaPC == 1) ? "Paper" : "Scissors");
        printf("******\n");

        //determines the winner of the round
        if (escolhaJogador == escolhaPC) {
            printf("Result: Tie!\n"); //displays tie if the choices are equal
            empate++; //increments the tie counter by 1
        } else if ((escolhaJogador == 0 && escolhaPC == 2) || //rock beats scissors
                   (escolhaJogador == 1 && escolhaPC == 0) || //paper beats rock
                   (escolhaJogador == 2 && escolhaPC == 1)) { //scissors beats paper
            printf("Result: Human wins!\n"); //displays that the human won
            vitoriaJogador++; //increments the player victory counter by 1
        } else {
            printf("Result: Computer wins!\n"); //displays that the computer won
            vitoriaPC++; //increments the computer victory counter by 1
        }
        printf("\n\n");
    }

    //displays the final result after playing all N rounds
    printf("Final Result after %d rounds:\n", N);
    printf("Human Victories: %d\n", vitoriaJogador); //displays the number of human victories
    printf("Computer Victories: %d\n", vitoriaPC); //displays the number of computer victories
    printf("Ties: %d\n", empate); //displays the number of ties

    return 0;
}