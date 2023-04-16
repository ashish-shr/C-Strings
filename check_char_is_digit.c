// Write a program in C to check whether a character is a digit or not.
#include <stdio.h>

int main(void)
{
    // declaring the variables
    char character;
    int i;

    // taking input string
    printf("Enter the character: ");
    scanf("%c", &character);

    // checking for digits
    if (character >= '0' && character <= '9')
    {
        printf("The entered character is a digit.");
    }
    else
    {
        printf("The entered character is not a digit.");
    }
}