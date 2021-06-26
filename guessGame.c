#include <stdio.h>
#include <stdlib.h>


int main()
{
    guessGame();

    return 0;
}


guessGame(){
    srand(time(0));
    int userGuess = 0;
    int randNum = rand();

    while(userGuess != randNum){
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        if (userGuess > randNum){
            printf("Your guess is too high. Guess again \n");
        }
        else if(userGuess < randNum){
            printf("your guess is too low. Guess again \n");
        }
    }
    printf("Hurray, you have guess the right number %d", userGuess);
}
