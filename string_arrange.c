// Program to arrange strings alphabetically
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][20], tmp[10];
    int i, j, n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", name[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((strcmp(name[j], name[j + 1])) > 0)
            {
                strcpy(tmp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tmp);
            }
        }
    }
    printf("After arranging names:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}