Does the following statement always compute the fractional part of f correctly?
assuming that f and frac_part are float variables

frac_part = f - (int) f;

if not, what's the problem?

no, if f is larger than the largest value of int it would fail
