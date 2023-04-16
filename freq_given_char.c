// Write a program in C to find the frequency of characters.
#include <stdio.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX], search;
    int i, count = 0;

    // taking input string
    printf("Enter the string: ");
    gets(str);

    // taking the character whose frequency needed to check
    printf("Check frequency of character: ");
    scanf("%c", &search);

    // finding the frequency of character
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == search)
        {
            count++;
        }
    }

    printf("The frequency of '%c' is : %d", search, count);
}
