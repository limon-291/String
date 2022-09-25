// Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
#define sizeMax 100
int main()
{
    char str[sizeMax];
    gets(str);
    int i = 0;
    int vowel = 0;
    int consonant = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {

            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {

                vowel++;
            }

            else
            {
                consonant++;
            }
        }
        i++;
    }

    printf("\nTotal vowels : %d", vowel);
    printf("\nTotal consonant : %d", consonant);
    return 0;
}
