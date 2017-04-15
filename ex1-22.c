 #include <stdio.h>
 #include <string.h>
#include <stdlib.h>
const size_t MAXLINE=10000; /* maximum input line length */
 int folding(char s[],int column);
 /* print the longest input line */
int main()
{
	int len; /* current line length */
	size_t size;
	char * line; /* current input line */
	char croppedLine[MAXLINE];
	while ((len = getline(&line, &size,stdin)) > 0)
	{
		int tabs;
		printf("%s\n","Enter the number of columns: " );
		scanf("%d",&tabs);
		folding(line,tabs);
		printf("%s\n",croppedLine );
		free(line);
	}
	return 0;
 }

int folding(char s[],int column)
{
	int len = strlen(s);
	int temp=column;

	for (int i = 0; i < len; ++i)
	{
		while (i<column && i<len) printf("%c",  s[i++]);
		if (i==column)
		{
			column+=temp;
			printf("-\n");
			printf("%c",s[i]);
		}
		if (i>column)
		{
			printf("%c",s[i]);
		}
	}
}