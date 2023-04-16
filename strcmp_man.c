// WAP in C to compare the two strings using strcmp
#include <stdio.h>
#include <string.h>
int main(void)
{
    // declaration of variables
    char str1[10], str2[10];
    int i, flag;

    // taking first and second string
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    // comparing the strings
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] == str2[i])
        {
            flag = 0;
        }
        else if (str1[i] > str2[i])
        {
            flag = 1;
        }
        else
        {
            flag = -1;
        }
    }

    // printing the conditions
    if (flag == 0)
    {
        printf("%s and %s are Same!\n", str1, str2);
    }
    else if (flag == 1)
    {
        printf("%s is greatest!\n", str1);
    }
    else
    {
        printf("%s is greatest!\n", str2);
    }
}