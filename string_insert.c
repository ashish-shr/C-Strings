// Program to delete string
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][20], newName[10], tmp[10];
    int i, n, loc;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", name[i]);
    }
    printf("Enter the location to insert name: ");
    scanf("%d", &loc);
    printf("Enter the new name: ");
    scanf("%s", newName);
    for (i = loc; i < n; i++)
    {
        strcpy(tmp, name[i]);
        strcpy(name[i], newName);
        strcpy(newName, tmp);
    }
    strcpy(name[n], newName);
    printf("After inserting name:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}