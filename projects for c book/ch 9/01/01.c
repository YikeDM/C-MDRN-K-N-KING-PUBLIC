#include <stdio.h>

#define ARR_LEN 17

void selection_sort(int a[], int b);

int main(void)
{
    char a;
    int counter = 0;
    int store_integer[ARR_LEN] = {0};


    printf("Enter positive integers greater than 0,");
    printf("\nUp to a number of 30 integers:  ");
    // not my solution to taking input, however i have learned from it.
    while(a != '\n' && counter < ARR_LEN)
    {
        scanf("%d%c", &store_integer[counter], &a);
        ++counter;
    }

    selection_sort(store_integer, ARR_LEN);

    for(int i = 0; i < ARR_LEN; ++i)
    {
        if(store_integer[i] > 0)
        {
            printf("%d ", store_integer[i]);
        }
    }
    printf("\n");

}

// recursively sorts an array,
// sorts the largest number and and adds it to the top of the array,
// then calls its self with array[n - 1]
void selection_sort(int a[], int n)
{
    // if array size is 1, this is the last integer and as such it will always be in the correct place.
    if(n == 1)
    {
        return;
    }

    int largest = 0, arr_pos;

    for(int i = 0; i < n; ++i)
    {
        if(a[i] >= largest)
        {
            largest = a[i];
            arr_pos = i;
        }
    }

    a[arr_pos] = a[n - 1];
    a[n - 1] = largest;

    selection_sort(a, n - 1);
}

