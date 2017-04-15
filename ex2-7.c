#include <stdio.h>
#include <string.h>
/*
 Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. 
*/


unsigned int invert(int x, int p, int n)
{
  for (int i = p; i < n; ++i)
  {
    x = x ^ (2<<i);
  }
  return x;
}

int main()
{
  int x,p,n;

  scanf("%d%d%d", &x,&p,&n);
  
  printf("%d\n", invert(x,p,n));

  return 0;
}