/* Write a program that implements the game known as rock, paper, scissors. The game will be played between two humans (user1 and user2) in a single round, always starting with user1. A move consists of choosing between rock, paper, or scissors, knowing that rock beats scissors, paper beats rock, and scissors beat paper. The other cases result in a tie. Your program should display the result of the match on the screen: user1 wins, user2 wins, or tie. For this implementation, assume that the number 0 represents rock, 1 represents paper, and 2 represents scissors.*/

#include <stdio.h>

int main() {
    //variable declaration
    int user1, user2;

    //input for user 1
    printf("User 1, choose your move (0 = Rock, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &user1); //receives input from user 1, "%d" because it's an integer

    //input for user 2
    printf("User 2, choose your move (0 = Rock, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &user2); //receives input from user 2, "%d" because it's an integer

    //checks if the chosen inputs from the users are valid, if not, returns an error message
    if (user1 < 0 || user1 > 2 || user2 < 0 || user2 > 2) { //(||) logical OR operator in C
        printf("Invalid input. Please choose 0, 1, or 2.\n");
        return 1; //if this 'if' executes, it means someone chose an invalid number, ends the program with error 1 (anything other than 0 is an error)
    }

    //determine who won
    if (user1 == user2) {
        printf("Result: Draw!\n");
    } else if ((user1 == 0 && user2 == 2) || //rock beats scissors
               (user1 == 1 && user2 == 0) || //paper beats rock
               (user1 == 2 && user2 == 1)) { //scissors beat paper
        printf("Result: User 1 wins!\n");
    } else {
        printf("Result: User 2 wins!\n");
    }

    return 0;
}