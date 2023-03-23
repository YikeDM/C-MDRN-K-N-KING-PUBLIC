What output does the following for statement produce?   

    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);

The output would be: 5 4 3 2

this is due to j > 0 being the tested expression,
therefore j = 1 is equal to i = 2