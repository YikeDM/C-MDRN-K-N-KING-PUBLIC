#include <stdio.h>

int main(void)
{
    int month, day, year, zero = 0;

    printf("Enter date in MM/DD/YYYY Format: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date: %d%.2d%d\n", year, month, day);

    return 0;
}