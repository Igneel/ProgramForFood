#include <stdio.h>
#include <string.h>
/*
Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The
standard library function strpbrk does the same job but returns a pointer to the location.) 

*/

/* squeeze: delete all c from s */
int any(char s[], char s2[])
{
  int result = -1;

  for (int i = 0; s[i]!='\0'; ++i)
  {
    for (int j = 0; s2[j]!='\0'; ++j)
    {
      if (s[i]==s2[j])
      {
        return i;
      }
    }
  }


  return result;

}

int main()
{
  char s1[256];
  char s2[256];
  scanf("%s", s1);
  scanf("%s", s2);
  
  printf("Lib: %s\n",strpbrk(s1,s2));
  int index=any(s1,s2);
  printf("My: %s\n", s1+index);

  return 0;
}