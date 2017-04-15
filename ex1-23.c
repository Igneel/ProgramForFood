 #include <stdio.h>
 #include <string.h>
#include <stdlib.h>
const size_t MAXLINE=10000; /* maximum input line length */
 
 /* print the longest input line */
int main()
{
	int len; /* current line length */
	size_t size;
	char  symbol; /* current input line */
	char prev='\0';
	char toprint='\0';
	int insideComm=0;
	int insideString=0;
	while ((symbol=getchar())!=EOF)
	{
		char *comm1="//";
		char *comm2="/*";
		char *comm3="*/";
		if (symbol=='\"')
		{
			if (insideString==1 && symbol=="\"")
			{
				insideString=0;
			}

			insideString=1;
		}

		if (!insideString)
		{
			if (prev=='/' && symbol=='/')
			{
				while ((symbol=getchar())!='\n');			
			}
			if (prev=='/' && symbol=='*')
			{
				insideComm=1;
			}
			if (prev=='*' && symbol=='/')
			{
				insideComm=0;
				prev=getchar();
				symbol=getchar();
			}
			toprint=prev;

			prev=symbol;

			if (!insideComm)
			{
				printf("%c",toprint);
			}
		}
		else
		{
			
			toprint=prev;
			prev=symbol;
			printf("%c",symbol);
		}
	}
 }