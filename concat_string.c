#include <stdio.h>

int main()
{
    char str1[10], str2[10], str[20];
    int i, j, c;
    printf("First string: ");
    gets(str1);
    printf("Second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str[i] = str1[i];
        c++;
    }

    for (i = c, j = 0; str2[j] != '\0'; i++, j++)
    {
        str[i] = str2[j];
    }

    str[i] = '\0';
    printf("String: %s", str);
    return 0;
}