#include <stdio.h>

int main(void)
{
    char input;

    float result = 0.0f, word_counter = 0.0f, length_counter = 0.0f;

    printf("Enter a sentence: ");

    while((input = getchar()) != '\n')
    {
        if(input != ' ')
        {
            ++length_counter;
        }
        else if(input == ' ')
        {
            ++word_counter;
        }
    }

    ++word_counter; // to count the last word after pressing enter
    result = length_counter / word_counter;


    printf("Average word length: %.1f", result);

}