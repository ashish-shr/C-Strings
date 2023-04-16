// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i, alphaCount = 0, digitCount = 0, spcharCount = 0;

    // taking input string
    printf("Enter the string: ");
    gets(str);

    // counting total number of alphabets, digits and special characters
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphaCount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digitCount++;
        }
        else
        {
            spcharCount++;
        }
    }

    // printing the total no. of alphabets, digits and special characters
    printf("Total no. of alphabets: %d\n", alphaCount);
    printf("Total no. of digits: %d\n", digitCount);
    printf("Total no. of special characters: %d\n", spcharCount);
}