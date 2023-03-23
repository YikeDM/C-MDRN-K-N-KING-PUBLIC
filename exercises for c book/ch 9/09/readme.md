What will be the output of the following program?
#include <stdio.h>

void swap(int a, int b) ;

int main(void)
{ 
    int i = 1, j = 2;
    swap(i, j) ;
    printfC'i = %d, j = %d\n", i, j);
    return 0;
}
void swap(int a, int b)
{ 
    int temp = a;
    a = b;
    b = temp;
}


the result would be > "i = 1, j = 2"

Due to swap being called but not assigning or returning anything.