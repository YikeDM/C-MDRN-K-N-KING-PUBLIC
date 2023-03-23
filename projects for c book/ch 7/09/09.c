#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int time1, time2;
    char suffix;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &time1, &time2, &suffix);

    suffix = toupper(suffix);

    if(suffix == 'A')
    {
        if(time1 == 12)
        {
            printf("Equivalent 24-hour time: 00:%d", time2);
        }
        else
        {
            printf("Equivalnet 24-hour time: %d:%d", time1, time2);
        }
    }
    else if(suffix == 'P')
    {
        if(time1 + 12 == 24)
        {
            printf("Equivalent 24-hour time: 12:%d", time2);
        }
        else
        {
            printf("Equivalne 24-hour time: %d:%d", time1 + 12, time2);
        }
    }


    return 0;

}