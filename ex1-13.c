#include <stdio.h>
#include <string.h>

const int width=50;

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
		for (int j = 0; j < width; ++j)
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
 char buf[256];
 int wordsLength[width];

 for (int i = 0; i < width; ++i)
 {
 	wordsLength[i]=0;
 }

 for (int i = 0; i < 256; ++i)
 {
 	buf[i]=0;
 }

 while(scanf("%s",buf))
 {
 	wordsLength[strlen(buf)]++;
 	printHist(wordsLength,width);
 }
 }