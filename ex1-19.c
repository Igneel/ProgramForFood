 #include <stdio.h>
 #include <string.h>
 #define MAXLINE 10000 /* maximum input line length */
 int getline(char line[], int maxline);
 int detab(char s[],char dest[],int tabs);
 /* print the longest input line */
 int main()
 {
 int len; /* current line length */
 
 char line[MAXLINE]; /* current input line */
 char croppedLine[MAXLINE];
 while ((len = getline(line, MAXLINE)) > 0)
 {
 	int tabs;
 	printf("%s\n","Enter the number of spaces for one tab: " );
 	scanf("%d",&tabs);
 	detab(line,croppedLine,tabs);
 	printf("%s\n",croppedLine );
 }
 return 0;
 }

 int detab(char s[],char dest[], int tabs)
 {
 	int len = strlen(s);
 	int j=0;
 	for (int i = 0; i < len; ++i)
 	{
 		if (s[i]=='\t')
 		{
 			for (int i = 0; i < tabs; ++i)
 			{
 				dest[j++]=' ';
 			}
 		}
 		else
 		{
 			dest[j++]=s[i];
 		}
 	}
 	dest[j]='\0';
 	return j;
 }
 /* getline: read a line into s, return length */
 int getline(char s[],int lim)
 {
 int c, i;
 for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
 s[i] = c;
 if (c == '\n') {
 s[i] = c;
 ++i;
 }
 s[i] = '\0';
 return i;
 }
 