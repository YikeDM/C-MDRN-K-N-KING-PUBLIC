#include <stdio.h>
#define MONTH 30
#define HOURS 24


int main(void)
{

    int temperature_readings[MONTH][HOURS];

    float avg = 0.0f;

    for(int row = 0; i < MONTH; ++i)
    {
        for(int col = 0; i < HOURS; ++i)
        {
            avg += temperature_readings[row][col];
        }
    }

    avg = (avg / HOURS) / MONTH;
}