#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int dice_roll();
bool play_game(void);

int main(void)
{
    srand((unsigned) time(NULL));

    printf("Welcome to craps!\n\n");

    int wins = 0, losses = 0, result;

    while(1)
    {
        
        if((result = play_game()) == true)
        {
            ++wins;
        }
        else
        {
            ++losses;
        }

        printf("Would you like to play again? (Y/N): ");
        char play_again;
        scanf(" %c", &play_again);

        if((play_again = toupper(play_again)) == 'Y')
        {}
        else
        {
            printf("Wins: %d, Losses: %d\n", wins, losses);
            break;
        }

    }

    



}

int dice_roll(void)
{
    int x, y;

    x = (rand() % 6) + 1;
    y = (rand() % 6) + 1;
    return x + y;
}

bool play_game(void)
{
    int result, point;

    if((result = dice_roll()) == 7 || result == 11)
    {
        printf("You rolled: %d\n", result);
        printf("You win!\n\n");
        return true;
    }
    else
    {
        point = result;
        printf("You rolled: %d\n", result);
        printf("Your point is: %d\n", point);
    }

    while(1)
    {
        if((result = dice_roll()) == 7 || result == 11)
        {
            printf("You rolled: %d\n", result);
            printf("You lose!\n\n");
            return false;
        }
        else if(result == point)
        {
            printf("You rolled: %d\n", result);
            printf("You win!\n\n");
            return true;
        }
        else
        {
            printf("You rolled: %d\n", result);
        }
    }
}