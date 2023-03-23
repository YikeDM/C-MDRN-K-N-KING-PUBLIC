#include <stdio.h>

int main(void)
{
    int a;

    printf("size of int: %lu\n", sizeof(a));
    printf("size of short: %lu\n", sizeof((short) a));
    printf("size of long: %lu\n", sizeof((long) a));
    printf("size of float: %lu\n", sizeof((float) a));
    printf("size of double: %lu\n", sizeof((double) a));
    printf("size of long double: %lu\n", sizeof((long double) a));
}