 #include <stdio.h>
 #include <string.h>
 #define MAXLINE 10000 /* maximum input line length */
 int entab(char s[],char dest[],int tabs);
 /* print the longest input line */
int main()
{
	int len; /* current line length */

	char line[MAXLINE]; /* current input line */
	char croppedLine[MAXLINE];
	while ((len = getline(line, MAXLINE,stdin)) > 0)
	{
		int tabs;
		printf("%s\n","Enter the number of spaces for one tab: " );
		scanf("%d",&tabs);
		entab(line,croppedLine,tabs);
		printf("%s\n","entabbed Line " );
		printf("%s\n",croppedLine );
	}
	return 0;
 }

 int entab(char s[],char dest[], int tabs)
 {
 	int len = strlen(s);
 	int j=0;
 	int space=-1;
 	char spaces[256];
 	for (int i = 0; i < 256; ++i)
 	{
 		spaces[i]=0;
 	}

 	for (int i = 0; i < tabs; ++i)
 	{
 		spaces[i]=' ';
 	}

 	for (int i = 0; i < len; ++i)
 	{
 		space=strstr(s+i,spaces);
 		if (space!=-1)
 		{
 			for (int k = i; k < space; ++k)
 			{
 				dest[j++]=s[k];
 			}
 			dest[j++]="\t";
 		}
 		else
 		{
 			dest[j++]=s[i];
 		}
 	}
 	dest[j]='\0';

 	return j;
 }