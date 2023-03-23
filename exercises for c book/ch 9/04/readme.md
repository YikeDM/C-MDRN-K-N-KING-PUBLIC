Write a function day_of_year (month, day, year) that returns the day of the year
(an integer between 1 and 366) specified by the three arguments.

int day_of_year(int month, int day, int year)
{
    int doy;

    for(int i = 1; i <= month; ++i)
    {
        switch(month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                doy += 31;
            
            case 4: case 6: case 9: case 11:
                doy += 30;

            case 2:
            // check if feb is a leap year
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                        doy += 29;
                else
                    doy += 28;
        }
    }

    doy += day;

    return doy;
}