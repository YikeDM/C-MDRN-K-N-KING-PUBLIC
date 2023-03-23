Write the following function:
float compute_GPA(char grades [], int n);
The grades array will contain letter grades (A. B, C. D. or F. either upper-case or lower¬
case); n is the length of the array. The function should return the average of the grades
(assume that A = 4, B = 3, C = 2. D = 1, and F = 0).

float compute_GPA(char grades[], int n)
{
    // assuming no toupper()
    float avg = 0.0f;
    for(int i = 0; i < n -1; ++i)
    {
        switch(grades[i])
        {

            case 'A': case 'a':
                avg += 4.0f;
                break;
            
            case 'B': case 'b':
                avg += 3.0f;
                break;
            
            case 'C': case 'c':
                avg += 2.0f;
                break;

            case 'D': case 'd':
                avg += 1.0f;
                break;

            
        }
    }

    avg /= n - 1;

    return avg;
}