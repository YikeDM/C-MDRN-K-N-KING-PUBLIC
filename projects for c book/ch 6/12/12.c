#include <stdio.h>

int main(void)
{
    float e, d, epsilon, term;
    

    printf("Enter ε: ");
    scanf("%f", &epsilon);


    e = 1.0f; 
    d = 1;
    term = 1.0f;
    for(int i = 1; term > epsilon ; ++i)
    {
        term = (1.0f / (d *= i));
        e += term;
    
    }

    
    printf("Approximation of e: %f\n", e);
}