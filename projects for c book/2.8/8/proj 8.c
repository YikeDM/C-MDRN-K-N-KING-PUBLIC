#include <stdio.h>

int main(void)
{
    float total, interest, payment;

    printf("Enter loan amount: ");
    scanf("%f", &total);

    printf("Enter interest amount: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);


    total = total - payment + (total * interest / 100 / 12);

    printf("Balance for the first month: %.2f\n", total);

    total = total - payment + (total * interest / 100 / 12);

    printf("Balance for second month: %.2f\n", total);

    total = total - payment + (total * interest / 100 / 12);

    printf("Balance for the third month: %.2f\n",total);


    
    
}
