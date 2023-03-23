Suppose that i is a variable of type int, j is a variable of type long, and k is a variable
of type unsigned int. What is the type of the expression

i + (int) j * k?

unsigned int, as j is cast to int before multiplying j by k, thus promoting int to unsigned int
