// Write a program in C to find the maximum number of occuring characters in a string.
#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i, count = 0, high = 0, freq[MAX] = {0};

    // taking input string
    printf("Enter the string: ");
    gets(str);

    // intializing the frequency of all characters to 1
    for (i = 0; i < strlen(str); i++)
    {
        freq[str[i]]++;
    }

    // finding the character having highest frequency and prin
    for (i = 0; i < strlen(str); i++)
    {
        if (count < freq[str[i]])
        {
            count = freq[str[i]];
            high = str[i];
        }
    }
    printf("The Highest frequency of character '%c' appears number of times : %d", high, count);
}