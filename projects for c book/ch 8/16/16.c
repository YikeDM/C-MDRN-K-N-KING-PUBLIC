#include <stdio.h>
#include <ctype.h>

int main(void)
{

    int array[26] = {0};
    char ch;
    
    printf("Enter first word: ");
    while((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        
        ch -= ('A' + 1);

        ++array[ch];

    }

    // getchar();

    printf("Enter second word: ");
    while((ch = getchar()) != '\n')
    {
        ch = toupper(ch);

        ch -= ('A' + 1);

        --array[ch];

    }

    int check = 0;
    for(int i = 0; i < 26; ++i)
    {
        if(array[i] > 0)
        {
            // printf("The words are not anagrams.");
            ++check;
            break;
        }
        
    }

    if(check > 0)
    {
        printf("The words are not anagrams");
    }
    else if(check == 0)
    {
        printf("The words are anagrams");
    }

}