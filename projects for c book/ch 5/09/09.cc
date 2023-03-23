#include <stdio.h>

int main(void)
{
    int month1, month2, day1, day2, year1, year2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if(month1 > month2 && day1 > day2 && year1 > year2)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n",
        month1, day1, year1, month2, day2, year2);
    }
    else
    {
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n",
        month2, day2, year2, month1, day1, year1);
    }

}