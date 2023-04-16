// Write a program in C to check whether a letter is uppercase or lowercase.
#include <stdio.h>

int main(void)
{
    // declaring the variables
    char ltr;
    int i;

    // taking input letter
    printf("Enter the letter: ");
    scanf("%c", &ltr);

    // checking case of letter
    if (ltr >= 'A' && ltr <= 'Z')
    {
        printf("The entered letter is a uppercase letter.");
    }
    else
    {
        printf("The entered letter is a lowercase letter.");
    }
}