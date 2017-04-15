 #include <stdio.h>
 #include <string.h>
 #define MAXLINE 10000 /* maximum input line length */
 int getline(char line[], int maxline);
 /* print the longest input line */
 void main()
 {
 int len; /* current line length */
 
 char line[MAXLINE]; /* current input line */
 char croppedLine[MAXLINE];
 while ((len = getline(line, MAXLINE)) > 0)
 {
 	cropLine(line,croppedLine);
 	printf("%s\n",croppedLine );
 }
 return 0;
 }

 int cropLine(char s[],char dest[])
 {
 	int len = strlen(s);
 	int was=0;
 	int j=0;
 	for (int i = 0; i < len; ++i)
 	{
 		if ((s[i]==' ' || s[i]=='\t') && was==0)
 		{
 		}
 		else
 		{
 			was=1;
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
 