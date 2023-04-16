// Program to search string
#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][20], searchName[10];
    int i, n, flag = 0;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name: ");
        scanf("%s", name[i]);
    }
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    for (i = 0; i < n; i++)
    {
        if ((strcmp(searchName, name[i])) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%s is found!\n", searchName);
    }
    else
    {
        printf("%s is not found!\n", searchName);
    }
    return 0;
}