#include <stdio.h>

int main(void)
{
    int n1, n2, o1 , o2, o3, o4, o5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n1);

    n2 = n1;
    n1 = n1 / 8;
    o1 = n2 % 8;

    n2 = n1;
    n1 = n1 / 8;
    o2 = n2 % 8;

    n2 = n1;
    n1 = n1 / 8;
    o3 = n2 % 8;
    
    n2 = n1;
    n1 = n1 / 8;
    o4 = n2 % 8;

    n2 = n1;
    n1 = n1 / 8;
    o5 = n2 % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", o5, o4, o3, o2, o1);

    return 0;
}