#include <stdio.h>
#include <string.h>

const int width=128;

int max(int * buf, int length)
{
	int m=0;
	for (int i = 0; i < length; ++i)
	{
		if(buf[i]>m) m=buf[i];
	}
	return m;
}

void printHist(int * buf, int length)
{
	int maxValue=max(buf,length);
	
	for (int i = maxValue; i >= 0; --i)
	{
		for (int j = 20; j < width; ++j)
		{
			if (buf[j]>=i)
			{
				printf("_");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");		
	}
}

 int main()
 {
 char buf;
 int wordsLength[width];

 for (int i = 0; i < width; ++i)
 {
 	wordsLength[i]=0;
 }

 while(scanf("%c",&buf))
 {
 	wordsLength[buf]++;
 	printHist(wordsLength,width);
 }
 }