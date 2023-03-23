#include <stdio.h>

int main(void)
{
    // int for function
    int hours, minutes;

    // take input from user
    printf("Enter 24 hour time [ xx:xx ]: ");
    scanf("%2d : %2d", &hours, &minutes);

    // checking hours is valid
    if(hours >= 12 && hours <= 24)
    {
        // if statement for specifically 12 to prevent 00:00 pm scenario
        if(hours == 12){
            printf("Equivalent 12-hour time: %d:%.2d pm\n", hours, minutes);
        }
        else
        {
            printf("Equivalent 12-hour time: %d:%.2d pm\n", hours - 12, minutes);
        }
    }
    // checking if hours is valid
    else if(hours <= 11 && hours >= 0)
    {
        // specific if statement to prevent 00:00 am
        if(hours == 0)
        {
            printf("Equivalent 12-hour time: %d:%.2d am\n", hours + 12, minutes);
        }
        else
        {
        printf("Equivalent 12-hour time: %d:%.2d am\n", hours, minutes);
        }
    }
    else
    {
        // invalid input prompt
        printf("Incorrect input!\n");
        return 0;
    }
}