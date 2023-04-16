#include <stdio.h>

int main()
{
  char sen[100];
  gets(sen);
  int i, count = 0;
  for (i = 0; sen[i] != '\0'; i++)
  {
    if (sen[i] == ' ' && sen[i + 1] != ' ')
    {
      count++;
    }
  }
  printf("Total words: %d", count + 1);
  return 0;
}