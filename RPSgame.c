#include <stdio.h>
#include <stdlib.h>
void process(int userInput, int compInput)
{
    compInput = rand() % 3;
    if (userInput == compInput)
    {
        printf("Tie!\n");
    }
    else if (userInput == 0 && compInput == 1)
    {
        printf("You lose! Paper beats rock\n");
    }
    else if (userInput == 1 && compInput == 2)
    {
        printf("You Lose! Scissors beat Rock\n");
    }
    else if (userInput == 2 && compInput == 0)
    {
        printf("You Lose! Rock beats Scissors\n");
    }
    else if (userInput >= 3 && userInput != 9)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("You Win!\n");
    }
}
int main()
{
    int userInput, compInput;
    printf("Enter 0 for Rock, 1 for Paper, 2 for Scissors, 9 to exit: ");
    scanf("%d", &userInput);
    process(userInput, compInput);
    if (userInput == 9)
    {
        return 0;
    }
}