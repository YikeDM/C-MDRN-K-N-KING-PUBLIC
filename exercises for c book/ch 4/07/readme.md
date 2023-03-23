The algorithm for computing the UPC Check digit edns with the following steps
subtract 1 from total
compute remainder when the adjustd total is divided by 10
subtract remainder from 9

it's tempting to try to simplify the algorithm by using these steps instead

compute remainder when the total is divided by 10
subtract remainder from 10

why doesn't this technique work?

--
The second, "simplified" algorithm could produce a check digit of 10, which would not be valid