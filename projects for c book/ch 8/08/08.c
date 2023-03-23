#include <stdio.h>

int main(void)
{

    int input_array[5][5] = {0};
    int sum = 0, high_score = 0, low_score = 0;
    float average = 0;
    printf("Enter 5 quiz grades for 5 students\n");
    for(int row = 0; row < 5; ++row)
    {
        printf("\nEnter Student %d: ", row + 1);
        for(int col = 0; col < 5; ++col)
        {
            scanf(" %d", &input_array[row][col]);
        }
    }

    for(int student = 0; student < 5; ++student)
    {
        for(int col = 0; col < 5; ++col)
        {
            sum += input_array[student][col];
        }
        average = (float)sum / 5;
        printf("Student %d total: %d\n", student + 1, sum);
        printf("Student %d average: %.1f\n", student + 1, average);
        sum = 0;
    }

    high_score = input_array[0][0];
    low_score = input_array[0][0];

    // printf("\nQuiz totals: ");
    for(int col = 0; col < 5; ++col)
    {
        for(int student = 0; student < 5; ++student)
        {
            sum += input_array[student][col];
            if(input_array[student][col] <= low_score)
            {
                low_score = input_array[student][col];
            }
            if(input_array[student][col] >= high_score)
            {
                high_score = input_array[student][col];
            }
        }
        average = (float)sum / 5;
        printf("Quiz %d average: %.1f\n", col + 1, average);
        printf("Quiz %d High score: %d\n", col + 1, high_score);
        printf("Quiz %d Low score: %d\n", col + 1, low_score);
        sum = 0;
        high_score = input_array[0][0];
        low_score = input_array[0][0];
    }





}