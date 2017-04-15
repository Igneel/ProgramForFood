#include <stdio.h>
/* replace multiple blanks */
main()
{
int c, prevc;
prevc='1';
while ((c = getchar()) != EOF)
{
	if (c == ' ' && prevc==' ') ;
	else
	{
		if (c == ' ')
		{
			prevc=' ';
		}
		printf("%c",c);
	}
	prevc=c;
}

}