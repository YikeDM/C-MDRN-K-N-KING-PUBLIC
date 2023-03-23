show output produced by fragments

-- i = 7; j = 8;
i *= j + 1;
printf("%d %d", i, j);

The result would be: "63 8"

-- i = j = k = 1;
i += j += k;
printf("%d %d %d, i, j, k);

The result would be "3 2 1"

-- i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);

The result would be "2 -1 3" assuming it goes negative, otherwise "1 0 3"

-- i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i, j, k);

The result would be "0 0 0"

