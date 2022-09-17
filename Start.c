// Random Number Guessing Game.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int randNum;
    srand(time(0));
    randNum = rand()%100 + 1;
    int guess , noOfGuesses = 1;

    do {
        printf("Guess A Random Number in Range of 1 & 100 : ");
        scanf("%d",&guess);
        if (guess > randNum)
        {
            printf("Guess is Higher Than Expected\n");
        }
        else if (guess < randNum)
        {
            printf("Guess is Lower Than Expected\n");
        }
        else
        {
            printf("Guess is Right!!\nYou Guesses are : %d",noOfGuesses);
        }
        noOfGuesses++;
    }
    while (guess != randNum);

    return 0;
}