#include <stdio.h>

int main(void)
{
    int time1, time2, minutes, suffix;

    printf("Enter 24 hour time: ");
    scanf("%d:%d", &time1, &time2);

    minutes = time1 * 60 + time2;



    int depart_array[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival_array[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    if(minutes >= 0 && minutes < 720)
    {
        suffix = 1;
    }
    else if(minutes >= 720 && minutes < 1440)
    {
        suffix = 2;
    }
    else if(minutes == 1440)
    {
        suffix = 1;
    }

    for(int i = 0; i < 8; ++i)
    {

        if(minutes <= 480 || minutes >= 1305)
        {
            printf("Closest departure time: %02d:%02d", depart_array[0] / 60, depart_array[0] % 60);
        
            printf("\nArrival time: %02d:%02d", arrival_array[0] / 60, arrival_array[0] % 60);
           

            break;
        }
        else if(minutes <= depart_array[i])
        {
            printf("Closest departure time: %02d:%02d", depart_array[i] / 60, depart_array[i] % 60);
          
            printf("\nArrival time: %02d:%02d", arrival_array[i] / 60, arrival_array[i] % 60);
           
            break;
        }
    }

}