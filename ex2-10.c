#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else. 
*/


char lower(char x)
{
  return (x>='A' && x<='Z'?x+0x20:x);
}

int main()
{
  char x;

  scanf("%c", &x);
  
  printf("%c\n", lower(x));

  return 0;
}