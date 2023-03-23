#include <stdio.h>

int main(void)
{
    int n1 = 0, n2 = 0, n3 = 0;
    
    printf("Enter three digit number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    printf("The reverse is: %d%d%d", n3, n2, n1);
    
}