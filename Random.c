#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int guess, randomNumber, numberOfGuesses = 0;
    srand(time(0));
    randomNumber = rand() % 100 + 1;
    do{
        printf("Enter your gusse number between 1 to 100: ");
        scanf("%d", &guess);
        numberOfGuesses++;
        if(guess > randomNumber){
            printf("Lower number please!\n");
        }
        else if(guess < randomNumber){
            printf("Higher number please!\n");
        }
        
    }
    while(guess!=randomNumber);
    printf("You guessed it in %d attempts!\n", numberOfGuesses);
    return 0;
}