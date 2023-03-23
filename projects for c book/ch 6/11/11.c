#include <stdio.h>

int main(void)
{
    float e, d;
    int n;

    printf("Enter n for e: ");
    scanf("%d", &n);

    e = 1.0f; 
    d = 1;
    for(int i = 1; i <= n; ++i)
    {

        e += 1.0f / (d *= i);
    
    }

    
    printf("%f", e);
}