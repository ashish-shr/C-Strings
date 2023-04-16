// Program to reverse a string without strrev()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10], tmp;
    printf("Enter the string: ");
    scanf("%s", str);
    int len = strlen(str), i;

    // reversing the string
    for (i = 0; i < len / 2; i++)
    {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    printf("Reversed String: %s", str);
    return 0;
}