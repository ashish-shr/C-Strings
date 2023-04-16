// WAP in C to compare the two strings using strcmp
#include <stdio.h>
#include <string.h>
int main(void)
{
    // declaration of variables
    char str1[10], str2[10];
    int result;

    // taking first and second string
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    // comparing using strcmp
    result = strcmp(str1, str2);

    // printing the result
    if (result == 0)
    {
        printf("%s and %s are equal!\n", str1, str2);
    }
    else if (result == 1)
    {
        printf("%s is greatest!\n", str1);
    }
    else
    {
        printf("%s is greatest!\n", str2);
    }
}