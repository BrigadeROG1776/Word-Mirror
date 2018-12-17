#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NMAX 100

void mirror(char* dest, char* src)
{
  int i;
  for(i=strlen(src)-1; i>=0; i--)
  {
    dest[strlen(dest)]=src[i];
  }
}

int main()
{
  char word[NMAX]="GREETINGS";

  mirror(word, word);

  printf("%s\n", word);


  return 0;
}
