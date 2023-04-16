// Program to delete string
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][20], tmp[10];
    int i, n, loc;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", name[i]);
    }
    printf("Enter the location to delete name: ");
    scanf("%d", &loc);
    for (i = loc; i < n - 1; i++)
    {
        strcpy(name[i], name[i + 1]);
    }
    printf("After deleting name:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}