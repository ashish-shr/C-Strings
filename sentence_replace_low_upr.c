// Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
#include <ctype.h> //contains functions such as islower(), isupper(), tolower(), toupper()
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i;

    // taking input sentence
    printf("Enter the sentence: ");
    gets(str);

    // checking for lower and uppercase and replacing them
    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i])) // islower(): checks whether the character is lowercase
        {
            str[i] = toupper(str[i]); // toupper(): converts the character into uppercase
        }
        else
        {
            str[i] = tolower(str[i]); // tolower(): converts the character into uppercase
        }
    }

    printf("Sentence: %s", str);
}