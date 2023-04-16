#include <stdio.h>
#include <string.h>
int main()
{
    char a[5][20], x[20];
    printf("Enter the names:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &a[i]);
    }
    int flag = 0;
    printf("Enter the name to search:\n");
    scanf("%s", &x);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(x, a[i]) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Search found!\n");
    }
    else
    {
        printf("Search not found!");
    }

    return 0;
}