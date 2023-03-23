#include <stdio.h>

float tax_due(float a);

int main(void)
{
    float taxable_income;

    printf("Enter taxable income: ");
    scanf("%f", &taxable_income);

    

    printf("Tax due: $%.2f\n", tax_due(taxable_income));
}

float tax_due(float a)
{
    float tax;

    if(a < 750.00f)
    {
        tax = a * 0.01f;
    }
    else if(a < 2250.00f)
    {
        tax = 7.50f + ((a - 750.00f) * 0.02f);
    }
    else if(a < 3750.00f)
    {
        tax = 37.50f + ((a - 2250.00f) * 0.03f);
    }
    else if(a < 5250.00f)
    {
        tax = 82.50f + ((a - 3750.00f) * 0.04f);
    }
    else if(a < 7000.00f)
    {
        tax = 142.50f + ((a - 5250.00f) * 0.05f);
    }
    else if(a >= 7000)
    {
        tax = 230.00f + ((a - 7000.00f) * 0.06f);
    }

    return tax;
}

