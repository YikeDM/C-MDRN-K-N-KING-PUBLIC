#include <stdio.h>

int powerof(int x, int n);

int main(void)
{
    int x, n;

    printf("Enter number, and power(format x^n): ");
    scanf("%d^%d", &x, &n);

    printf("%d", powerof(x, n));

    

}

int powerof(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }

    if(n % 2 == 0)
    {
        int y = powerof(x, n / 2);
        return y * y;
    }
    else
    {
        return x * powerof(x, n - 1);
    }
}