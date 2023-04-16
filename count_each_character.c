// Write a C program to count each character in a given string.
#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i, j, count = 0, freq[MAX] = {0};

    // taking input string
    printf("Enter the string: ");
    gets(str);

    // intializing the frequency of all characters to 1
    for (i = 0; i < strlen(str); i++)
    {
        freq[str[i]]++;
    }

    // Counting frequency of each character and printing
    for (i = 0; i < strlen(str); i++)
    {
        if (freq[i] != 1)
        {
            count = 0;
            for (j = 0; j < strlen(str); j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    freq[j] = 1;
                }
            }
            printf("%c : %d\n", str[i], count);
        }
    }
}