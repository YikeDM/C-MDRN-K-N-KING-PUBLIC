We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the number of elements in an array,
the expression sizeof(a) / sizeof(t), where t is the type of a's elements, would also work, but it's considered
an inferior technique. Why?

Using it the second way would mean its portability as a definition would be worse (unless you add the type as a parameter when calling it)
as you would have to make a different macro for different types of arrays,

it would also mean if you wanted to change the type of the array, you would
have to also change the type in the sizeof(t) expression.