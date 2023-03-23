What output does the following program fragment produce? (Assume that i is an integer variable)

i = 1;
switch (i % 3)
{
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}

Due to the missing break,
i will continue to evaluate, 

if i = 0, result is zeroonetwo,
if i = 1, result is onetwo,
if i = 2, result is two.