#include <stdio.h>

int main(void)
{
    int number, dateD, dateM, dateY;
    float price;

    printf("Enter Item Number: ");
    scanf("%d", &number);

    printf("Enter Unit Price: ");
    scanf("%f", &price);

    printf("Enter Purchase Date: ");
    scanf("%d/%d/%d", &dateM, &dateD, &dateY);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("Num\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t\t%.2d/%.2d/%.4d\n", number, price, dateM, dateD, dateY);

}