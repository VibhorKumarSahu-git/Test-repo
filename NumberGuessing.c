#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int guess,randomnumber,no_of_guess;
    no_of_guess=0;
    srand(time(0));
    randomnumber=rand()%100+1;
    do{
        printf("enter the number between 1 to 100\n");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess>randomnumber){
            printf("lower number please\n");
        }
        else if(guess<randomnumber){
            printf("higher number please\n");
        }
       
    }
    while(guess!=randomnumber);
    printf("you guessed it in %d attempts\n",no_of_guess);
}