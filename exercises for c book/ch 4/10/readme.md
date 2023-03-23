int i, j

show the results of the fragments

i = 6;
j = i += i;
printf("%d %d", i, j);

The result would be "12 12"

i = 5;
j = (i -= 2) + 1;
printf("%d %d", i, j);

The result would be "3 4"

i = 7;
j = 6 + (i = 2.5);
printf("%d %d", i, j);

The result would be "2 8"

i = 2; j = 8;
j = (i = 6) + (j = 3);
printf("%d %d", i, j);

The result would be "6 9"
