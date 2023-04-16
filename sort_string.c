#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char a[5][20], x[25];

    printf("Enter the strings:\n");
    for (i = 0; i < 5; i++)
        scanf("%s", &a[i]);
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(x, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], x);
            }
        }
    printf("Order of Sorted Strings:\n");
    for (i = 0; i < 5; i++)
        printf("%s\t", a[i]);

    return 0;
}