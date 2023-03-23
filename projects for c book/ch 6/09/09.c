#include <stdio.h>

int main(void)
{
    float total, interest, payment;
    int num_of_payments;

    printf("Enter loan amount: ");
    scanf("%f", &total);

    printf("Enter interest amount: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_of_payments);

    for(int i = 1; i <= num_of_payments; ++i)
    {
        total = total - payment + (total * interest / 100 / 12);

        if(total < 0)
        {
            total = 0;
        }

        printf("Balance for month %d: %.2f \n", i, total);
    }
    
    
}