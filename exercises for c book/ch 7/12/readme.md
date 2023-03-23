suppose that i is variable of type int, f is a variable of type float, and d is a variable of type double,
explain what conversions take place during the execution of the following statement:

d = i + f;

first i + f turns i into a float,
then d = result is stored in a double, but calculated as a single precision float.