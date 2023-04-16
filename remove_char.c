// Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i, j;

    // taking input string
    printf("Enter the string: ");
    scanf("%s", str);

    // checking for character other than alphabets
    for (i = 0; str[i] != '\0'; i++)
    {
        while ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("String after removing special characters: %s", str);
}