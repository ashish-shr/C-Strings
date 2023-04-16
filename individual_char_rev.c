// Write a program in C to separate individual characters from a string in reverse order
#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i;

    // taking input string
    printf("Enter the string: ");
    scanf("%s", str);

    // printing individual characters in reverse order
    printf("Individual characters in reverse order are:\n");
    for (i = (strlen(str) - 1); i >= 0; i--)
    {
        printf("%c\t", str[i]);
    }
}