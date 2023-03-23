show output of fragments
assume i j k are int variables

i = 1;
printf("%d ", i++ - 1);
printf("%d", i);

The result would be "0 1"

i = 10, j = 5;
printf("%d ", i++ - ++j);
printf("%d %d", i, j);

The result would be "4 11 6"

i = 7, j = 8;
printf("%d ", i++ - --j);
printf("%d %d", i, j);

The result would be "0 8 7"

i = 3, j = 4, k = 5;
printf("%d ", i++ - j++ + --k);
printf("%d %d %d", i, j, k);

The result would be "3 4 5 4"

