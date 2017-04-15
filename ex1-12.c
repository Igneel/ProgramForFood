#include <stdio.h>
 #define IN 1 /* inside a word */
 #define OUT 0 /* outside a word */
 /* count lines, words, and characters in input */
int main()
{
	char buf[256]={0};

	while(1) 
	{
		scanf("%s",buf);
		printf("%s\n", buf);
	}
	return 0;
}