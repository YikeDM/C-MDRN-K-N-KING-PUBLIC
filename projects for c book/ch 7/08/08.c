#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int time1, time2, minutes;
    char suffix;

    printf("Enter 24 hour time: ");
    scanf("%d:%d ", &time1, &time2);

    suffix = getchar();

    suffix = toupper(suffix);

    if(suffix == 'A')
    {
        minutes = (time1 * 60) + time2;
    }
    else if(suffix == 'P')
    {
        if(time1 == 12)
        {
            minutes = ((12 * 60) + time2);
        }
        else
        {
            minutes = ((time1 + 12) * 60) + time2;
        }
    }

    printf("%d\n", minutes);

    if(minutes <= 480 || minutes >= 1305)
    {
        printf("Closest departure time: 8:00 am\n");
        printf("Arrival time: 10:16 am\n");
    }
    else if(minutes <= 583)
    {
        printf("Closest departure time: 9:43 am\n");
        printf("Arrival time: 11:52 am\n");
    }
    else if(minutes <= 679)
    {
        printf("Closest departure time: 11:19 am\n");
        printf("Arrival time: 1:31 pm\n");
    }
    else if(minutes <= 767)
    {
        printf("Closest departure time: 12:47 \npm");
        printf("Arrival time: 3:00 pm\n");
    }
    else if(minutes <= 840)
    {
        printf("Closest departure time: 2:00 pm\n");
        printf("Arrival time: 4:08 pm\n");
    }
    else if(minutes <= 945)
    {
        printf("Closest departure time: 3:45 pm\n");
        printf("Arrival time: 5:55 pm\n");
    }
    else if(minutes <= 1140)
    {
        printf("Closest departure time: 7:00 pm\n");
        printf("Arrival time: 9:20 pm\n");
    }
    else if(minutes <= 1305)
    {
        printf("Closest departure time: 9:45 pm\n");
        printf("Arrival time: 11:58 pm\n");
    }
}