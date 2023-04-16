// Write a program in C to separate individual characters from a string
#include <stdio.h>
#define MAX 50

int main(void)
{
    // declaring the variables
    char str[MAX];
    int i;

    // taking input string
    printf("Enter the string: ");
    scanf("%s", str);

    // printing individual characters
    printf("Individual characters are:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c\t", str[i]);
    }
}