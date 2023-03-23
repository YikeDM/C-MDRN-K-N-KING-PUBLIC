#include <stdio.h>
#define ARR_LENG (int) (sizeof(a) / sizeof(a[0]))
#define N 10


int main(void)
{

    int a[N], i;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < ARR_LENG; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");
    for(i = ARR_LENG - 1; i >= 0; --i)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;

}