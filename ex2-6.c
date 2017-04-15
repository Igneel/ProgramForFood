#include <stdio.h>
#include <string.h>
/*
Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged. 
*/

unsigned int setbits(int x, int p, int n, int y)
{
  for (int i = p; i < y; ++i)
  {
    x = x | (2<<i);
  }
  return x;
}

int main()
{
  int x,p,n,y;

  scanf("%d%d%d%d", &x,&p,&n,&y);
  
  printf("%d\n", setbits(x,p,n,y));

  return 0;
}