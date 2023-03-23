#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{

    int array1[26] = {0}, array2[26] = {0};
    printf("Enter first word: ");
    read_word(array1);
    
    printf("Enter second word: ");
    read_word(array2);

    bool check;

    check = equal_array(array1, array2);

    if(check == 0)
    {
        printf("Words are not anagrams\n");
    }
    else if(check == 1)
    {
        printf("Words are anagrams\n");
    }
}


void read_word(int counts[26])
{
    char ch;
    while((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        
        ch -= ('A' + 1);

        ++counts[ch];

    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i = 0; i < 26; ++i)
    {
        if(counts1[i] != counts2[i])
        {
            return false;
        }
        
    }

    return true;
}