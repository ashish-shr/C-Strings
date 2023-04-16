// Write a program in C to replace the spaces in a string with a specific character.
#include <stdio.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX], spcChar;
    int i;

    // taking input string
    printf("Enter the string: ");
    gets(str);

    // taking special character
    printf("Enter the special character to replace space: ");
    scanf("%c", &spcChar);

    // checking for spaces
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = spcChar;
        }
    }

    printf("Result: %s", str);
}