#include <stdio.h>
int main(void)
{
    int i, n;
    char a = 1;

    printf("This program prints a table of squares. \n") ;
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); // buffer flush
    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i) ;
        if(i % 24 == 0)
        {
            printf("Press enter to continue...\n");
            while((getchar()) != '\n'); // loop till \n is input.
        }
    }
    return 0;

}
