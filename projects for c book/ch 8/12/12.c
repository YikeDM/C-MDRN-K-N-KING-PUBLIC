#include <stdio.h>
#include <ctype.h>

int main(void)
{
    
    int array[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
                  // A   B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q   R  S  T  U  V  W  X  Y  Z
                  // 1  3  3  2  1  4  2  4  1  8  5  1  3  1  1  3 (10) 1  1  1  1  4  4  8  4 (10)


    char character;
    int sum = 0;

    printf("Enter scrabble word: ");

    while((character = getchar()) != '\n')
    {
        character = toupper(character);
        character -= 'A';
        sum += array[character];
    }

    printf("Your scrabble word is worth: %d", sum);

    // not going to lie, I smashed this challenge, completed in around 5~ minutes.
}