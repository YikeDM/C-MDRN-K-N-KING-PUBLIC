#include <stdio.h>

int main(void)
{
    int month1, month2, day1, day2, year1, year2, i = 1;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);


    while(i)
    {
        printf("Enter next date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month2, &day2, &year2);
        if(month2 == 0 && day2 == 0 && year2 == 0)
        {
            break;
        }

        if(year1 > year2 || month1 >= month2 && day1 >= day2 && year1 >= year2)
        {
            month1 = month2;
            day1 = day2;
            year1 = year2;
        }
    }
    printf("%.2d/%.2d/%d is the earliest date\n", month1, day1, year1);
}