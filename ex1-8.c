#include <stdio.h>
/* count lines in input */
main()
{
int c, nl,tabs,blanks;
nl = 0;
tabs=0;
blanks=0;
while ((c = getchar()) != EOF)
{
	if (c == '\n')
	++nl;
	if (c== '\t')
	{
		++tabs;
	}
	if (c== ' ')
	{
		++blanks;
	}
}
printf("NewLines: %d\n", nl);
printf("tabs: %d\n", tabs);
printf("blanks: %d\n", blanks);
}