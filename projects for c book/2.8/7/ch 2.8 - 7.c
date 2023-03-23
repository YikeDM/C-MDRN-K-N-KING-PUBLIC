#include <stdio.h>

int main(void)
{
    // variables for calculation
    int userinput, dollar20, dollar10, dollar5, dollar1;

    // asks for input and takes input
    printf("Enter Dollar amount: ");
    scanf("%d", &userinput);

    // divides input and subtracts divided amount from original amount
    dollar20 = userinput / 20;
    userinput = userinput - dollar20 * 20;
    dollar10 = userinput / 10;
    userinput = userinput - dollar10 * 10;
    dollar5 = userinput / 5;
    userinput = userinput - dollar5 * 5;
    dollar1 = userinput;

    // prints data
    printf("$20 dollar bills: %d\n$10 dollar bills: %d\n", dollar20, dollar10);
    printf("$5 dollar bills: %d\n$1 dollar bills: %d\n", dollar5, dollar1);
}