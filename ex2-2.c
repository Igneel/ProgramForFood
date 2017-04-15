 #include <stdio.h>
 #include <string.h>
int main()
 {
  char s[256];
  char c;
int lim=10;
for (int i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
 s[i] = c;

for (int i=0; i < lim-1 ; ++i)
{
  if ((c=getchar()) != '\n')
    if (c != EOF)
    {
      s[i] = c;
    }
 
}

printf("%s\n",s);

  return 0;
 }