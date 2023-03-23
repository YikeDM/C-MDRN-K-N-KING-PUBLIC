Suppose that the function f has the following definition:
int f (int a, int b) { ... }
Which of the following statements are legal? (Assume that i has type int and x has type
double.)
(a) i = f (83, 12); legal - standard use
(b) x = f (83, 12) ; legal
(c) i = f (3.15, 9.28) ; legal but will only use value 3 and 9
(d) x = f (3.15, 9.28) ; legal but will only return whole numbers
(e) f (83, 12) ; legal but does nothing