// Write a program to Create number guessing game.//
#include<stdio.h>
int main()
{
    int number=64,guess,attempts=0;
    printf("Guess the number between 1 and 100\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attempts++;
        if(guess==number){
            printf("Correct! You guessed it in %d attempts.\n",attempts);
        }
        else if(guess<number){
            printf("Try a larger number!\n");
        }
        else{
            printf("Try a smaller number!\n");
        }
    } while (guess!=number);
    return 0;
}
