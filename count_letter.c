#include <stdio.h>

int main()
{
  char sen[50];
  gets(sen);
  int i, count = 0;
  for (i = 0; sen[i] != '\0'; i++)
  {
    count++;
  }
  printf("Total letters: %d", count);
  return 0;
}
