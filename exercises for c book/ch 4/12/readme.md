fragments again...

i and j are int


i = 5;
j = ++i * 3 - 2;
printf("%d %d", i, j);

The result would be "6 16"

i = 5;
j = 3 - 2 * i++;
printf("%d %d", i, j);

The result would be "6 -7"

i = 7;
j = 3 * i-- + 2;
printf("%d %d", i, j);

The result would be "6 23"

i = 7;
j = 3 + --i * 2;
printf("%d %d", i, j);

The result would be "6 15"

