If i and j are positive integers, does (-i) / j always have the same value as - (i/j)

Justify your answer

//
Yes, they would always have the same value, as -i / 1, or -10 / 2 = -5,
and - (i/j), or - (10/2) = -5 in c99,

However in c89, values aren't always truncated towards zero, so the results of 
of (-9) / 7, can produce -1 or -2, whilst -(9/7) will always produce -1
//