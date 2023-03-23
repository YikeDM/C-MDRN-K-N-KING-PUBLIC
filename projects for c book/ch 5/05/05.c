#include <stdio.h>

int main(void)
{
    float taxable_income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &taxable_income);

    if(taxable_income < 750.00f)
    {
        tax = taxable_income * 0.01f;
    }
    else if(taxable_income < 2250.00f)
    {
        tax = 7.50f + ((taxable_income - 750.00f) * 0.02f);
    }
    else if(taxable_income < 3750.00f)
    {
        tax = 37.50f + ((taxable_income - 2250.00f) * 0.03f);
    }
    else if(taxable_income < 5250.00f)
    {
        tax = 82.50f + ((taxable_income - 3750.00f) * 0.04f);
    }
    else if(taxable_income < 7000.00f)
    {
        tax = 142.50f + ((taxable_income - 5250.00f) * 0.05f);
    }
    else if(taxable_income >= 7000)
    {
        tax = 230.00f + ((taxable_income - 7000.00f) * 0.06f);
    }

    printf("Tax due: $%.2f\n", tax);
}