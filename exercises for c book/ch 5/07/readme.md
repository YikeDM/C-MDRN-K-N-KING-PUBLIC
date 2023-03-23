What does the following statment print if i has the value 17?
what does it print if i has the value of -17?

printf("%d\n", i > = 0 ? i : -i);

It will print 17 if i = 17,
It will print 17 if i = -17, as i is not greater or equal to zero, effectively printing --17 (doule negative is positive)