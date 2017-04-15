#include <stdio.h>
/* replace multiple blanks */
main()
{
int c;
while ((c = getchar()) != EOF)
{
	if (c == '\t') {
		printf("%s","\\t");
	}
	else if (c == '\\') {
		printf("%s","\\");
	} else if (c == '\b') {
		printf("%s","\\b");
	}
	else
	{
		printf("%c",c);
	}


}

}