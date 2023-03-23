#include <stdio.h>

int main(void)
{
float commission, value, shares;

printf("Enter number of shares and value per share: "); 
scanf("%f %f", &shares, &value);

value *= shares;

if (value< 2500.00f)
{
    commission = 30.00f + 1.017 * value;
} 
else if (value < 6250.001f)
{
    commission = 56.00f +.0066f * value; 
}
else if (value< 20000.001f)
{
    commission = 76.00f + .0034f * value; 
}
else if (value < 50000.00f)
{
    commission = 100.00f +.0022f * value; 
}
else if (value < 500000.00f)
{
    commission = 155.00f +.0011f * value;
}

else
{
commission = 255.00+.0009 * value;
}

if (commission < 39.00f)
{
    commission = 39.00f;
}

if(shares < 2000)
{

    printf("Commission charged by rival broker: $%.2f\n", 33.00f + (0.03f * shares));

}
else if(shares >= 2000)
{
    printf("Commission charged by rival broker: $%.2f\n", 33.00f + (0.02f * shares));
}

printf("Commission from us: $%.2f\n", commission);

return 0;
}

