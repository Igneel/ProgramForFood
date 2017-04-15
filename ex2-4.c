#include <stdio.h>
#include <string.h>


/* squeeze: delete all c from s */
 void squeeze(char s[], char s2[])
 {
 int i, j;
 for (int m = 0; s2[m] != '\0'; ++m)
 {
  char c=s2[m];
     for (i = j = 0; s[i] != '\0'; i++)
   if (s[i] != c)
   s[j++] = s[i];
   s[j] = '\0';
 }
 
 }

int main()
{
  char s1[256];
  char s2[256];
  scanf("%s", s1);
  scanf("%s", s2);
  squeeze(s1,s2);
  printf("%s\n", s1);

  return 0;
}