Show how to replace a continue statement by an equivalent goto statement

int i, n;

    for (i = 1; i < 10; ++i)
    {
        if (i / 2 == 3)
        {
            continue;
        }
        printf("%4d", i);
    }
    
    printf("\n");

    for (n = 1; n < 10; ++n)
    {
        if (n / 2 == 3)
        {
            goto END_FOR;
        }
        printf("%4d", n);
        END_FOR: ; 
    }