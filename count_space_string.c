// Write a program in C to count the total number of spaces in a string.
#include <stdio.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i, spaceCount = 0;

    // taking input string
    printf("Enter the string: ");
    gets(str);

    // printing total no. of spaces
    printf("Total no. of spaces in the string are: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaceCount++;
        }
    }
    printf("%d", spaceCount);
}